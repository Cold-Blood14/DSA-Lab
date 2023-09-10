#include <bits/stdc++.h>
using namespace std;
#define MAX 8
void enQ(int data);
void deQ();
void print();
int isfull();
int isempty();
int Q[MAX], frnt=-1,rear=-1;
int main()
{
    deQ();
    enQ(1);
    enQ(2);
    enQ(3);
    enQ(4);
    print();
    deQ();
    print();
    enQ(5);
    enQ(6);
    enQ(7);
    print();
    deQ();
    print();
    enQ(8);
    enQ(9);
    enQ(10);
    print();
    deQ();
    print();
    enQ(9);
    enQ(8);
    enQ(13);
    print();
    return 0;
}
int isfull()
{
    return  (frnt==rear+1 or frnt==0 and rear==MAX-1)? 1 : 0 ;
}
int isempty()
{
    return (frnt==-1) ? 1 : 0;
}
void deQ()
{
    if(isempty()) cout<<"Queue is empty\n";
    else
    {
        printf("Deleted Element %d\n",Q[frnt]);
        if(frnt==rear) frnt=rear=-1;
        else frnt=(frnt+1)%MAX;
    }
}
void enQ(int data)
{
    if(isfull()) cout<<"Queue is full.\n";
    else
    {
        rear=(rear+1)%MAX;
        Q[rear]=data;
        if(frnt==-1) frnt=0;
    }
}
void print()
{
    int i;
    for(i=frnt; i!=rear; i=(i+1)%MAX)
        cout<<Q[i]<<' ';
    cout<<Q[i];
    cout<<endl;
}


