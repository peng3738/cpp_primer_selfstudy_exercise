#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

class BinStrTree;

class TreeNode 
{
	friend class BinStrTree;
public:
	TreeNode() :value(), count(0), left(nullptr), right(nullptr) {};
	TreeNode(string st,int i) :value(st),count(i),left(nullptr),right(nullptr){};
	TreeNode(const TreeNode &);
	TreeNode& operator=(const TreeNode &);
	~TreeNode();
private:
	string value;
	int count;
	TreeNode *left;
	TreeNode *right;
};

class BinStrTree
{
public:
	BinStrTree(const TreeNode & BS=TreeNode()) :root(new TreeNode(BS)),use(new size_t(1)) {};
	//BinStrTree(),
	BinStrTree(const BinStrTree& BS) :root(BS.root), use(BS.use) { ++*use;};
	BinStrTree &operator=(const BinStrTree&);
	~BinStrTree();
private:
	TreeNode *root;
	size_t *use;
};


TreeNode::TreeNode(const TreeNode &TN)
{
	value = TN.value;
	count = TN.count;
	if(TN.left) left =new TreeNode(*TN.left);
	else left = nullptr;
	if(TN.right) right = new TreeNode(*TN.right);
	else right = nullptr;
}
TreeNode::~TreeNode()
{
	delete left;
	delete right;
}
TreeNode &TreeNode::operator=(const TreeNode &TN)
{
	value = TN.value;
	count = TN.count;
	TreeNode *temp = nullptr;
	if (TN.left)temp =new TreeNode( *TN.left);
	delete left;
	left = temp;

	temp = nullptr;
	if (TN.right) temp = new TreeNode(*TN.right);
	delete right;
	right = temp;

	return *this;
}

BinStrTree &BinStrTree::operator=(const BinStrTree&BS)
{
	++*BS.use;
	if (--*use == 0)
	{
		delete root;
		delete use;
	}
	root = BS.root;
	use = BS.use;
	return *this;
}
BinStrTree::~BinStrTree()
{
	if (--*use == 0)
	{
		delete root;
		delete use;
	}
}
int main()
{
	TreeNode TN;
	BinStrTree BS;
	system("pause");
	return 0;
}