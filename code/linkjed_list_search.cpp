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
bool search(int num)
{
    node* nptr=new node();
    nptr->data=num;
    node *tptr=head;
    while(tptr!=NULL)
    {
        if(tptr->data==nptr->data)
            return true;
        else
        {
            tptr=tptr->next;
        }
    }
    return false;
}
void others_ccreat(int others,int val)
{
    node *nptr=new node();
    nptr->data=others;
    node *tptr=head;
    node *n=NULL;
    node *k;
    k->data=val;

    while(tptr->data!=nptr->data){
        n->next=tptr;
        tptr=tptr->next;
    }
    n->next=k;
    while(tptr!=NULL){
        n->next=tptr;
        n=n->next;
    }
}
int delet_node(int value)
{
    node* tptr=head;
    node* prev=NULL;
    while(tptr->!=value)
    {

    }
}
void print()
{
    cout<<"current linked list is:";
    node* tptr=head;
    while(tptr!=NULL){
        cout<<tptr->data<<"-> ";
        tptr=tptr->next;
    }
    cout<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        create(n);
    }
    others_ccreat(5,2);
    print();
    int number;
    cin>>number;
    if(search(number)==true)
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;
}
