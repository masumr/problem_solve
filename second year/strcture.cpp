#include<bits/stdc++.h>
using namespace std;

struct slinklist
    {
        int data;
        string name;
        struct slinklist* next;
    };
    typedef struct slinklist node;

int main()
{

    node* newnode;
    newnode = (node *) malloc(sizeof(node));
    printf("\n Enter data: ");
    scanf("%d", &newnode -> data);
    printf("\n Enter name: ");
    scanf("%s", newnode -> name);
    newnode -> next = NULL;
    printf("%d",newnode->data);
    printf("%s",newnode->name);
}
