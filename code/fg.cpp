#include<bits/stdc++.h>
using namespace std;
struct node{
    node* left;
    int data;
    node* right;
};
void insert_data(node* current,int value);
node* root=NULL;
void insert_value(int value)
{
    node* nptr=new node();
    nptr->left=NULL;
    nptr->data=value;
    nptr->right=NULL;
    if(root==NULL)
        root=nptr;
    else
        insert_data(root,value);
}
void insert_data(node* current,int value)
{
    node* nptr=new node();
    nptr->left=NULL;
    nptr->data=value;
    nptr->right=NULL;
    if(current->data>value)
    {
        if(current->left==NULL)
            current->left=nptr;
        else
            insert_data(current->left,value);
    }
    else{
        if(current->right==NULL)
            current->right=nptr;
        else
            insert_data(current->right,value);
    }
}
bool search(node* root,int value)
{
    if(root==NULL)
        return false;
    if(root->data==value)
        return true;
    if(root->data>value)
        search(root->left,value);
    else
        search(root->right,value);
}
void print(node* root)
{
    if(root==NULL)
        return;
    print(root->left);
    cout<<(root->data)<<"\t";
    print(root->right);
}
int main()
{
    int n;
    for(int i=0;i<7;i++){
        cin>>n;
        insert_value(n);
    }
    print(root);
    if(search(root,5)==true)
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;
}
