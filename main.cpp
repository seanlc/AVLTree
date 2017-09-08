#include <iostream>
#include "AVLTree.h"

using namespace std;

void test_constr_destr()
{
    AVLTree myTree;
}

void test_insert()
{
    AVLTree myTree;
    myTree.putItem(50);
    myTree.putItem(25);
    myTree.putItem(75);
    myTree.putItem(85);
    myTree.putItem(65);
    myTree.putItem(35);
    myTree.putItem(15);
    myTree.print();
}
void test_find()
{
    AVLTree myTree;
    myTree.putItem(50);
    myTree.putItem(25);
    myTree.putItem(75);
    myTree.putItem(85);
    myTree.putItem(65);
    myTree.putItem(35);
    myTree.putItem(15);
    myTree.print();
    myTree.findItem(50);
    myTree.findItem(75);
    myTree.findItem(15);
    myTree.findItem(0);
}
int main()
{
//    test_constr_destr();
//      test_insert();
    test_find();
}
