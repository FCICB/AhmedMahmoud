//
// Created by ahmed on 04/08/23.
//

#include <iostream>
#include "binarySearch.h"
using namespace std;

Node::Node(int item){
    data=item;
    left=right= nullptr;
}
binarySearch::binarySearch()
{
    root = NULL;
}
Node *binarySearch::insert(Node *r, int item) {
    if (r == nullptr){
        Node *newNode = new Node(item);
        r=newNode;}
    else if(item<r->data)
        r->left= insert(r->left,item);
    else if(item > r->data)
        r->right=insert(r->right,item);
    return r;
}

void binarySearch::insert( int item) {
    root= insert(root,item);
}

Node *binarySearch::search(Node *r,int item) {
    if (r== nullptr)
        return nullptr;
    else if(item=r->data)
        return r;
    else if (item <r->data)
        return search(r->left,item);
    else if(item>r->data)
        return search(r->right,item);
}
bool binarySearch::search(int item) {
    Node *newNode = search(root, item);
    if (newNode == nullptr)
        return false;
    else
        return true;
}
void binarySearch::preorder(Node* r)
{
    if(r== nullptr)
        return;
    cout<<r->data<<" ";
    preorder(r->left);
    preorder(r->right);

}
void binarySearch::inorder(Node* r)
{
    if(r== nullptr)
        return;
    inorder(r->left);
    cout<<r->data<<" ";
    inorder(r->right);

}
void binarySearch::postorder(Node* r)
{
    if(r== nullptr)
        return;
    postorder(r->left);
    postorder(r->right);
    cout<<r->data<<" ";
}
Node * binarySearch::findMin(Node *r)
{
    if(r== nullptr)
        return nullptr;
    else if(r->left== nullptr)
        return r;
    else
        findMin(r->left);
}
Node* binarySearch::findMax(Node* r)
{
    if (r == NULL)
        return NULL;
    else if (r->right == NULL)
        return r;
    else
        return findMax(r->right);
}
Node* binarySearch::del(Node *r, int item) {
    if (r == nullptr)
        return nullptr;
    else if (item < r->data)
        r->left = del(r->left, item);
    else if (item > r->data)
        r->right = del(r->right, item);
    else {
        if (r->left == NULL && r->right == NULL)
            r = NULL;
        else if (r->left != NULL && r->right == NULL) // one child on the left
        {
            r->data = r->left->data;
            delete r->left;
            r->left = NULL;
        } else if (r->left == NULL && r->right != NULL) // one child on the right
        {
            r->data = r->right->data;
            delete r->right;
            r->right = NULL;
        } else {
            Node *max = findMax(r->left);
            r->data = max->data;
            r->left = del(r->left, max->data);
        }
        return r;
    }
}

