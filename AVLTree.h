#include <iostream>
#include <iomanip>

using namespace std;

struct tNode
{
    int num;
    tNode * left;
    tNode * right;
    tNode(int dig)
    : num (dig), left(nullptr), right(nullptr)
    {}
};

class AVLTree
{
  public:
    AVLTree()
    : root (nullptr), numNodes(0)
    {}
    ~AVLTree()
    {}
    void makeEmpty();
    bool isEmpty()
    {
        return numNodes == 0;
    }
    bool isFull();
    int getSize()
    {
        return numNodes;
    }
    int getItem();
    void putItem(int num)
    {
        tNode * newNode = new tNode(num);
	insertNum(root, newNode);
	++numNodes;
    }
    void deleteItem(int num);
    void print()
    {
        visualRep(root, 0);
    }
  private:
    tNode * root;
    int numNodes;
    tNode * findNode(tNode * tRoot, int num);
    tNode * findParentOfNode(tNode * tRoot, tNode * par, int num);
    void insertNum(tNode * & tRoot, tNode * newNode)
    {
        if(tRoot == nullptr)
	    tRoot = newNode;
	else if ( newNode-> num > tRoot-> num)
	    insertNum(tRoot->right, newNode);
	else
	    insertNum(tRoot->left, newNode);
    }
    void deleteTree(tNode * tRoot);
    void visualRep(tNode * tRoot, int level)
    {
        if(tRoot != nullptr)
	{
	    visualRep(tRoot->right, ++level);
	    cout << setw(10 * level) << "Node: " << tRoot->num << endl;
	    visualRep(tRoot->left, level++);
	}
    }
};
