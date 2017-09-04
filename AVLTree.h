#include <iostream>

using namespace std;

struct tNode
{
    int num;
    tNode * left;
    tNode * right;
    tNode(int dig);
};

class AVLTree
{
  public:
    AVLTree();
    ~AVLTree();
    void makeEmpty();
    bool isEmpty();
    bool isFull();
    int getSize();
    int getItem();
    void putItem(int num);
    void deleteItem(int num);
    void print();
  private:
    tNode * root;
    int numNodes;
    void deleteTree();
};
