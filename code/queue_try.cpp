#include<bits/stdc++.h>
using namespace std;
const int size=10;
int que[size],front=0,rear=0;
int enqueue(int value)
{
    if(rear==size)
        cout<<"the queue is full"<<endl;
    else
    {
        cout<<value<<" added"<<endl;
        que[rear]=value;
    }
    rear++;
}
int dequeue(int value)
{
    if(rear==front)
        cout<<"queue is empty"<<endl;
    else
    {
        front=front+1;
        cout<<"removed "<<value<<endl;
    }
}
int display()
{
    int temp=front;
    if(front==rear)
        cout<<"the queue is empty"<<endl;
    else
    {
        cout<<"\n elment is current queue: ";
        for(int i=temp;i<rear;i++)
            cout<<que[i]<<"\t";
        cout<<endl;
    }
}
int main()
{
    for(int j=10;j>0;j--)
    {
        enqueue(j);
        display();
    }
    for(int j=10;j>0;j--)
    {
        dequeue(j);
        display();
    }
}
