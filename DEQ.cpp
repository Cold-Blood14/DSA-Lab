#include <iostream>
using namespace std;
#define MAX 8
void enQ_f(int data);
void enQ_r(int data);
void deQ_f();
void deQ_r();
void getfront(){ cout<<"Front Element:"<<Q[frnt]<<endl;}
void getrear(){ cout<<"Rear Element:"<<Q[rear]<<endl;}
void display();
int isfull();
int isempty();
int Q[MAX], frnt=-1,rear=-1;
int main()
{
    enQ_f(2);
    enQ_f(3);
    enQ_r(5);
    display();
    enQ_f(10);
    enQ_r(8);
    enQ_f(15);
    enQ_f(20);
    display();
    enQ_r(6);
    getfront();
    enQ_f(12);
    enQ_f(6);
    deQ_f();
    deQ_r();
    deQ_r();
    display();
    deQ_f();
    deQ_r();
    deQ_f();
    deQ_f();
    display();
    return 0;
}
int isfull()
{
    return  (frnt==(rear+1)%MAX )? 1 : 0 ;
}
int isempty()
{
    return (frnt==-1) ? 1 : 0;
}
void deQ_f()
{
    if(isempty()) cout<<"Queue is empty\n";
    else
    {
        printf("Deleted Element %d\n",Q[frnt]);
        if(frnt==rear) frnt=rear=-1;
        else frnt=(frnt+1)%MAX;
    }
}
void deQ_r()
{
    if(isempty()) cout<<"Queue is empty\n";
    else
    {
        printf("Deleted Element %d\n",Q[rear]);
        if(frnt==rear) frnt=rear=-1;
        else if(rear==0) rear=MAX-1;
        else rear=(rear-1)%MAX;
    }
}
void enQ_r(int data)
{
    if(isfull()) cout<<"Queue is full.\n";
    else
    {
        rear=(rear+1)%MAX;
        Q[rear]=data;
        if(frnt==-1) frnt=0;
    }
}
void enQ_f(int data)
{
    if(isfull()) cout<<"Queue is full.\n";
    else
    {
        if(rear==-1) rear=frnt=0;
        else if(frnt==0) frnt=MAX-1;
        else frnt=(frnt-1)%MAX;
        Q[frnt]=data;
    }
}
void display()
{
    int i;
    for(i=frnt; i!=rear; i=(i+1)%MAX)
        cout<<Q[i]<<' ';
    cout<<Q[i];
    cout<<endl;
}



