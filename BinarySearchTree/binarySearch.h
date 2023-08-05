//
// Created by ahmed on 04/08/23.
//

#ifndef BINARYSEARCHTREE_BINARYSEARCH_H
#define BINARYSEARCHTREE_BINARYSEARCH_H

class Node
{
public:
    Node *left,*right;
    int data;
    Node(int item);
};
class binarySearch {
public:
    Node * root;
    Node* insert(Node *r,int item);
    void insert(int item);
    Node* del(Node *r,int item);
    void inorder(Node *r);
    void postorder(Node *r);
    void preorder(Node *r);
    Node* search(Node *r,int item);
    bool search(int item);
    Node* findMax(Node* r);
    Node*findMin(Node *r);
    binarySearch();
};


#endif //BINARYSEARCHTREE_BINARYSEARCH_H
