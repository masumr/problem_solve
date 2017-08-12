#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head=NULL;
void frist_insert(int value)
{
    node* nptr=new node;
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
int print()
{
    cout<<"frist insert linked list: ";
    node *tptr=head;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<" <- ";
        tptr=tptr->next;
    }
    cout<<0<<endl;
}
int main()
{
    frist_insert(1);
    print();
    frist_insert(2);
    print();
    frist_insert(3);
    print();
}
