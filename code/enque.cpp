#include<bits/stdc++.h>
using namespace std;
const int size=5;
int queu[size];
int front=0,rear=0;
void enqueue(int value)
{
    if(rear==size)
        cout<<"the queue is full"<<endl;
    else
    {
        //cout<<value<<" added:"<<endl;
        queu[rear]=value;
    }
    rear++;
}
void dequeue(int value)
{
    if(rear==front)
        cout<<"the queue is empty"<<endl;
    else
    {
        front=front+1;
        //cout<<value<<"removed"<<endl;
    }
}
void display()
{
    int temp=front;
    if(rear==front)
        cout<<"the queue is empty"<<endl;
    else
    {
        //cout<<"\n elment is current queue:";
        for(int i=temp;i<rear;i++)
            cout<<queu[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    for(int j=5;j>=1;j--)
    {
        enqueue(j);
        display();
    }
    for(int j=5;j>=1;j--)
    {
        dequeue(j);
        display();
    }
}
