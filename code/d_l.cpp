#include<bits/stdc++.h>
using namespace std;
struct node{
    node* left;
    int data;
    node* right;
};
node *head=NULL;
void creat_l(int value)
{
    node *tptr;
    node *nptr=new node();
    nptr->left=NULL;
    nptr->data=value;
    nptr->right=NULL;
    if(head==NULL)
    {
        head=nptr;
        tptr=head;
    }
    else{
        tptr->right=nptr;
        nptr->right=tptr;
        tptr=nptr;
    }
}
void insert_into_tree(int value)
{
    node* tptr;
    node *nptr=
}
void print()
{
    node *tptr=head;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<" -> ";
        tptr=tptr->right;
    }
    cout<<endl;
}
int main()
{
    creat_l(5);
    print();
}
