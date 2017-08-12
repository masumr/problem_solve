#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* pre;
    node* next;
};
node* head=NULL;
void add_last(int value)
{
    node *tptr;
    node *nptr=new node();
    nptr->data=value;
    nptr->next=NULL;
    nptr->pre=NULL;
    if(head==NULL)
    {
        head=nptr;
        tptr=head;
    }
    else
    {
        tptr->next=nptr;
        nptr->pre=tptr;
        tptr=nptr;
    }
}
void add_frist(int value)
{
    node *tptr;
    node *nptr=new node();
    nptr->data=value;
    nptr->next=NULL;
    nptr->pre=NULL;
    if(head==NULL){
        head=nptr;
        tptr=head;
    }
    else
    {
        nptr->next=tptr;
        tptr->pre=nptr;
        tptr=nptr;
        head=tptr;
    }
}
void print()
{
    cout<<"current linked list: ";
    node *tptr=head;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<"->";
        tptr=tptr->next;
    }
    cout<<endl;
}
int main()
{
    add_last(5);
    print();
    add_last(3);
    print();
    add_frist(6);
    print();
    add_frist(4);
    print();
}
