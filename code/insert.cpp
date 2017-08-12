#include<bits/stdc++.h>
using namespace std;
struct tree{
    tree* left;
    int data;
    tree* right;
};
void insert_value(tree* current,int value);
tree *root=NULL;
void insert(int value)
{
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
bool search(tree* root,int value)
{
    if(root==NULL)
        return false;
    else
    {
        if(root->data==value)
            return true;
        else if(root->data>value)
            return search(root->left,value);
        else
            return search(root->right,value);
    }
}
void print(tree* root)
{
    if(root!=NULL){
        print(root->left);
        print(root->right);
    cout<<root->data<<' ';

    }

}
int main()
{
    int n;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        insert(n);
    }
    print(root);
    cout<<endl;
    int k;
    cin>>k;
    if(search(root,k)==true)
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;
}
