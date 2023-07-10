#include<bits/stdc++.h>
using namespace std;

class Node {
public:
        int val;
        Node * left;
        Node * right;

        Node(int v)
        {
            this->val = v;
            this->left = nullptr;
            this->right = nullptr;
        }
};

void preOrder(Node * root)
{
    if(root==nullptr)return;

    preOrder(root->left);
    preOrder(root->right);
    cout<<root->val<<" " ;
}


int main()
{
    Node * root = new Node (10);
    Node * a = new Node (20);
    Node * b = new Node (30);
    Node * c = new Node (40);
    Node * d = new Node (50);
    Node * e = new Node (60);
    Node * f = new Node (70);
    Node * g = new Node (80);
    Node * h = new Node (90);
    Node * i = new Node (100);

    root->left = a;
    root->right = b;
    a->left =c;
    a->right =d;
    b->right = e;
    c->left =f ;
    c->right =g;
    e->left = h;
    e->right = i;

    preOrder(root);
}

