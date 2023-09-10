#include <bits/stdc++.h>
using namespace std;
#define MAX 100
void enQ(int data);
void deQ();
void print();
int isfull();
int isempty();
int Q[MAX], frnt=-1,rear=-1;
int main()
{
    deQ();
    enQ(5);
    enQ(4);
    enQ(10);
    enQ(5);
    print();
    deQ();
    print();
     enQ(6);
     enQ(4);
     enQ(10);
     print();
     deQ();
     print();
      enQ(6);
      enQ(4);
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
    return  rear==MAX-1? 1 : 0 ;
}
int isempty()
{
    return (frnt==-1 or frnt > rear) ? 1 : 0;
}
void deQ()
{
    if(isempty()) cout<<"Queue is empty\n";
    else
    {
        printf("Deleted Element %d\n",Q[frnt]);
        if(frnt==rear) frnt=rear=-1;
        else frnt++;
    }
}
void enQ(int data)
{
    if(isfull()) cout<<"Queue is full.\n";
    else
    {
        rear++;
        Q[rear]=data;
        if(frnt==-1) frnt=0;
    }
}
void print(){
    for(int i=frnt;i<=rear;i++) cout<<Q[i]<<' ';
    cout<<endl;
}


