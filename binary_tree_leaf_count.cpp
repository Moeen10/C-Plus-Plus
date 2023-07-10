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

Node * input_tree()
{
    int val;
    cin>>val;
    Node * root;
    if(val==-1)
    {
        root=nullptr;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node*>q;
    if(root)q.push(root);
    while(!q.empty())
    {
        //1.Ber kore ana

        Node * f = q.front();
        q.pop();

        //2.Kaj kora
        int l,r;
        cin>>l>>r;
        Node *Cleft;
        Node *Cright;
        if(l==-1){
            Cleft = nullptr;
        }
        else{
            Cleft = new Node(l);
        }
        if(r==-1){
            Cright = nullptr;
        }
        else{
            Cright = new Node(r);
        }
        f->left=Cleft;
        f->right = Cright;

        //3.Chilfren gulake dhukaw
         if(f->left)q.push(f->left);
         if(f->right)q.push(f->right);
    }
     return root;
}


int countLeaf(Node * root){
if(root==nullptr)return 0;
if(root->left == nullptr && root->right == nullptr)return 1;
int l = countLeaf(root->left);
int r = countLeaf(root->right);
return l+r;

}


int main()
{
    Node * root =input_tree();
    cout<<"Count tree leaf: ";
    cout<<countLeaf(root)<<endl;;

}

