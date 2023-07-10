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

void levelOrderPrint_Left_to_Right(Node * root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        // 1 . Node ke hold kore rakha / ber kore ana;
        Node * f = q.front();
        q.pop();

        // 2. ja korar eikhane korte hobe
        cout<<f->val<<" ";

        //Children guloke line e niye ana;
         if(f->left)q.push(f->left);
         if(f->right)q.push(f->right);



    }
}

void levelOrderPrint_Right_to_Left(Node * root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        // 1 . Node ke hold kore rakha / ber kore ana;
        Node * f = q.front();
        q.pop();

        // 2. ja korar eikhane korte hobe
        cout<<f->val<<" ";

        //Children guloke line e niye ana;
         if(f->right)q.push(f->right);
         if(f->left)q.push(f->left);

    }
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
    cout<<"Right to Left Print : - ";
    levelOrderPrint_Right_to_Left(root);
    cout<<endl;
    cout<<"Left to Right Print : - ";
    levelOrderPrint_Left_to_Right(root);
}



