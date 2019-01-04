//From pezy 
#include<iostream>
#include<memory>
#include<string>

using std::cout;
using std::endl;
using std::shared_ptr;
using std::string;

struct connection
{
	string ip;
	int port;
	connection(string ipc, int portc) :ip(ipc), port(portc) {};
};

struct destination
{
	string ip;
	int port;
	destination(string ipc, int portc) :ip(ipc), port(portc) {};
};

connection connect(destination *Dest)
{
	shared_ptr<connection> Conn(new connection(Dest->ip, Dest->port));
	cout << "creating connection(" << Conn.use_count() << ")" << endl;
	return *Conn;
}
void disconnect(connection Conn)
{
	cout << "connection close(" << Conn.ip << ":" << Conn.port << ")" << endl;
}
/*
void end_connection(connection *p)
{
	disconnect(*p);
}
*/
void f(destination &d)
{
	connection c = connect(&d);
	shared_ptr<connection>p(&c, [](connection *Conn) {disconnect(*Conn); });
}


int main()
{
	destination dest("202.118.176.67", 3316);
	f(dest);
	system("pause");
	return 0;
}