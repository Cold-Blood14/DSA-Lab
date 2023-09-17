#include <iostream>
#include <cstdlib>
using namespace std;
struct node
{
    int value;
    struct node* next;
}*frnt=NULL,*rear=NULL;
int isempty(){
return frnt==NULL? 1 : 0;
}
void enq(int val)
{
    struct node *newnode = (struct node *) malloc(sizeof(struct node));
    newnode->value=val;
    newnode->next=NULL;
    if(frnt==NULL && rear==NULL)
    {
        frnt=newnode;
        rear=newnode;
    }
    else
    {
        rear->next= newnode;
        rear= newnode;
    }
}
void deq()
{
    if(isempty()){cout<<"Queue is empty\n";}
    else{
    struct node *p=frnt;
    frnt=frnt->next;
    if(frnt==NULL) rear==NULL;
    cout<<"Deleted element :"<<p->value<<endl;
    free(p);}
}
void display()
{
    struct node* p=frnt;
    while(p!=NULL)
    {
        cout<<p->value<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
    enq(40);
    enq(410);
    enq(20);
    enq(30);
    display();
    deq();
    display();
    cout<<"Front element: "<<frnt->value;
    return 0;
}
