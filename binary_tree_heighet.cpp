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


Node * takeInput()
{
    Node * root = nullptr;
    int v;
    cin>>v;
    if(v==-1){
        root = nullptr;
    }
    else{
        root = new Node(v);
    }
    queue<Node*>q;
    if(root){
        q.push(root);
    }
    while(!q.empty())
    {
        // 1--------------------

        Node * p = q.front();
        q.pop();

        // 2--------------------

        int l , r;
        Node * Cleft = nullptr;
        Node * Cright = nullptr;
        cin>>l>>r;

        if(l!=-1){
             Cleft = new Node (l);
        }
        if(r!=-1){
         Cright = new Node (r);
        }

        p->left = Cleft;
        p->right = Cright;

//3 ---------------------------------------------

        if(Cleft)q.push(Cleft);
        if(Cright)q.push(Cright);

    }
    return root;
}

int c(Node * root){
    if(root==nullptr)return 0;
    int l = c(root->left);
    int r = c(root->right);
    return max( l , r )+1;
}
int main()
{
    Node * root= takeInput();
    cout<<c(root);
}
