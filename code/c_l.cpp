#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head=NULL;
void create(int value)
{
    node *nptr=new node();
    nptr->data=value;
    nptr->next=NULL;
    if(head==NULL)
        head=nptr;
    else
    {
        node *tptr=head;
        while(tptr->next!=NULL){
            tptr=tptr->next;
        }
        tptr->next=nptr;
        tptr=nptr;
    }
}
int frist_insert(int value)
{
    node* nptr=new node();
    nptr->data=value;
    nptr->next=NULL;
    if(head==NULL)
        head=nptr;
    else
    {
        nptr->next=head;
        head=nptr;
    }
}
void remove_last(node* head)
{
    node* tptr=head;

    if(tptr->next==NULL)
        cout<<"current linked is empty"<<endl;
    else
    {
        node* tptr=head;
        node* nptr=tptr;
        while(tptr->next!=NULL){
            nptr=tptr;
            tptr=tptr->next;
        }
        nptr->next=NULL;
    }
}
void remove_last(node* head,int val)
{
    node* tptr=head;

    if(tptr->next==NULL)
        cout<<"current linked is empty"<<endl;
    else
    {
        node* tptr=head;
        node* nptr=tptr;
        while(tptr->next!=NULL){
                if(tptr.data==val){
                 nptr->next=tptr->next;
                 cout<<"node deleted"<<endl;
                 break;
                }else{
                    nptr=tptr;
                    tptr=tptr->next;
                }
        }

    }
}
void midile_insert(int pos,int value)
{
    node* tptr=head;
    node* nptr=head;
    if()
}
void print()
{
    cout<<"curerent linked list: ";
    node* tptr=head;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<"->";
        tptr=tptr->next;
    }
    cout<<endl;
}
int main()
{
    frist_insert(5);
    print();
    frist_insert(4);
    print();
    frist_insert(3);
    print();
    remove_last(head);
    print();
}
