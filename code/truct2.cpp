#include<stdio.h>
using namespace std;
struct slinklist
{
int data;
struct slinklist* next;
};
typedef struct slinklist node;
node* start=NULL;
int main()
{
        node* newnode;
        newnode = (node *) malloc(sizeof(node));
        printf("\n Enter data: ");
        scanf("%d", &newnode -> data);
        newnode -> next = NULL;
        return newnode;
}
