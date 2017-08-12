#include<bits/stdc++.h>
using namespace std;
struct node{
    node* left;
    int data;
    node* right;
};
node *root=NULL;


void insertvalue(node **root,int val){
    if(!(*root)){
        node *tmp = new node();
    tmp->data = val;
        tmp->left = NULL;
        tmp->right = NULL;

        *root=tmp;
    return;
    }
    if(val < (*root)->data) {
    insertvalue(&(*root)->left, val);
  } else {
     insertvalue(&(*root)->right, val);
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
int main(){
    //insertvalue(&root,5);
    //insertvalue(&root,6);
    //insertvalue(&root,3);
    int val;
    for(int i= 1;i<5; i++){
            val=0;
        scanf("%d",&val);
        insertvalue(&root,val);
    }
   traverseTree(root);
return 0;

}

