#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head=NULL;
void creat(int value)
{
    node* nptr=new node();
    nptr->data=value;
    nptr->next=NULL;
    if(head==NULL)
        head=nptr;
    else
    {
        node *tptr=head;
        while(tptr->next!=NULL)
            tptr=tptr->next;
        tptr->next=nptr;
        nptr=tptr;
    }
}
void creat_middle(int others,int value)
{
    node *others=NULL;
    node* nptr=new node();
    nptr->data=value;
    nptr->next=NULL;
    node* tptr=head;
    while(tptr!=NULL)
        tptr=tptr->next;
    tptr->next=nptr;
    nptr=tptr;
    while(tptr!=NULL)
        tptr->next=tptr;

}
void print()
{
    cout<<"current linked list: ";
    node *tptr=head;
    while(tptr!=NULL){
        cout<<tptr->data<<"->";
        tptr=tptr->next;
    }
    cout<<endl;
}
int main()
{
    creat(4);
    print();
    creat(2);
    print();
    creat(1);
    print();
    creat_middle(5);
    print();
}
