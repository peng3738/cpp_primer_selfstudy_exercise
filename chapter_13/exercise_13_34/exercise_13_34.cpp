#include<iostream>
#include<string>
#include<set>

using std::cout;
using std::endl;
using std::string;
using std::set;


class Folder;

class Message 
{
	friend class Folder;
	friend void swap(Message &, Message &);
public:
	Message() = default;
	Message(const string & st) :contents(st) {};
	Message(const Message &);
	Message &operator =(const Message &);
	~Message();
	void Save(Folder &);
	void Remove(Folder &);
private:
	set<Folder*> Fset;
	string contents;
	void add_to_Folder(const Message &); 
	void remove_from_Folder();

	void addFolder(Folder *f) { Fset.insert(f); };
	void remFolder(Folder *f) { Fset.erase(f); };
};

class Folder
{
	friend class Message;
	Folder() = default;
	Folder(const Folder &);
	Folder &operator =(const Folder &);
	~Folder();

public:
	void addMsg(  Message * Mt) { Mset.insert(Mt); };
	void remMsg( Message * Mt) { Mset.erase(Mt); };
private:
	set<Message*> Mset;
	void add_to_Message(const Folder &);
	void remove_from_Message();
};

void Message::Save(Folder &FS)
{
	Fset.insert(&FS); 
	FS.addMsg(this);
}

void Message::Remove(Folder &FS)
{
	Fset.erase(&FS); 
	FS.remMsg(this);
}

void Message::add_to_Folder( const Message &Mt)
{
	for (auto f : Mt.Fset)
		f->addMsg(this);
}

Message::Message(const Message & Mt):contents(Mt.contents),Fset(Mt.Fset)
{
	add_to_Folder(Mt);
}

Message::~Message()
{
	remove_from_Folder();
}
void Message::remove_from_Folder()
{
	for (auto f : Fset)
		f->remMsg(this);
	Fset.clear();
}

Message &Message::operator =(const Message &Mt) 
{
	remove_from_Folder();
	contents = Mt.contents;
	Fset = Mt.Fset;
	add_to_Folder(Mt);
	return *this;
}

void swap(Message &Ms, Message &Mt)
{
	using std::swap;
	for (auto f : Ms.Fset)
		f->remMsg(&Ms);
	for (auto f : Mt.Fset)
		f->remMsg(&Mt);
	swap(Ms.Fset, Mt.Fset);
	swap(Ms.contents, Mt.contents);
	for (auto f : Ms.Fset)
		f->addMsg(&Ms);
	for (auto f : Mt.Fset)
		f->addMsg(&Mt);
}

void Folder::add_to_Message(const Folder &Ft)
{
	for (auto Ms : Ft.Mset)
		Ms->addFolder(this);
}

void Folder::remove_from_Message()
{
	for (auto Ms : Mset)
		Ms->remFolder(this);
	Mset.clear();
}

Folder::Folder(const Folder &Ft)
{
	for (auto Ms : Ft.Mset)
		add_to_Message(Ft);
}
Folder &Folder::operator=(const Folder &Ft)
{
	remove_from_Message();
	Mset = Ft.Mset;
	add_to_Message(Ft);
	return *this;
}

Folder::~Folder()
{
	remove_from_Message();
}

int main()
{
	system("pause");
	return 0;
}