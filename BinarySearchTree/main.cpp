#include <iostream>
#include "binarySearch.h"
using namespace std;
int main() {
    binarySearch BST;
    BST.insert(5);
    BST.insert(10);
    BST.insert(8);
    BST.insert(9);
    cout<<"PreORder: "<<"\n";
    BST.preorder(BST.root);
    puts("");
    cout<<"POstORder: "<<"\n";
    BST.postorder(BST.root);
    puts("");
    cout<<"inorder: "<<"\n";
    BST.inorder(BST.root);
    cout << "\nDelete Items \n ";
    Node *result = BST.del (BST.root , 10);
    cout << "\n preorder After Delete 10 \n ";
    BST.preorder(BST.root);

    return 0;
}
