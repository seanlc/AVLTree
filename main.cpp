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
int main()
{
//    test_constr_destr();
      test_insert();
}
