#include<bits/stdc++.h>
using namespace std;
struct node{
    node *left;
    int data;
    node* right;
};
node* root=NULL;
void insert_value(int value)
{
    node* parent;
    node *current;
    node* nptr=new node();
    nptr->left=NULL;
    nptr->data=value;
    nptr->right=NULL;
    if(root==NULL)
        root=nptr;
    else
    {
        current=root;
        parent=NULL;
        while(1)
        {
            parent=current;
            if(value<parent->data)
            {
                current=current->left;
                if(current==NULL){
                    parent->left=nptr;
                    return;
                }
            }
            else
            {
                current=current->right;
                if(current==NULL)
                {
                    parent->right=nptr;
                    return;
                }
            }

        }
    }
}
void traverseTree(node *root){
    if(root == NULL){
        return ;
    }

    traverseTree(root->left);

    printf("%d ",root->data);
    traverseTree(root->right);
}
int main()
{
    int n;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        insert_value(n);
    }
    traverseTree(root);
}
