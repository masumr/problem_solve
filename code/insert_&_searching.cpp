#include<bits/stdc++.h>
using namespace std;
struct tree{
    tree* left;
    int data;
    tree* right;
};
tree *root=NULL;
void insert_value(tree* current,int value);
void insert_data(tree* root,int value){
    tree* nptr=new tree();
    nptr->left=NULL;
    nptr->data=value;
    nptr->right=NULL;
    if(root==NULL)
        root=nptr;
    else
        insert_value(root,value);
}
void insert_value(tree* current,int value){
    tree* nptr=new tree();
    nptr->left=NULL;
    nptr->data=value;
    nptr->right=NULL;
    if(current->data>value){
        if(current->left==NULL)
            current->left=nptr;
        else
            return insert_value(current->left,value);
    }
    else{
        if(current->right==NULL)
            current->right=nptr;
        else
            return insert_value(current->right,value);
    }
}
void print(tree* root){
    if(root==NULL)
        return;
    print(root->left);
    cout<<Root->data<<' ';
    print(root->right);

}
int main()
{
    int n;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        insert_data(root,n);
    }
    print(root);
}
