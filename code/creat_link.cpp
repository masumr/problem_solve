#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head=NULL;
void create(int value)
{
    node *nptr=new node();
    nptr->data=value;
    nptr->next=NULL;
    if(head==NULL){
        head=nptr;
    }
    else{
        node *tptr=head;
        tptr->next=nptr;
        tptr=nptr;
    }
}
void print()
{
    cout<<"current linked list: ";
    node *tptr=head;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<" -> ";
        tptr=tptr->next;
    }
    cout<<endl;
}
int main()
{
    create(6);
    print();
    create(5);
    print();
    create(4);
    print();
}
