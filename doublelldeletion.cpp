#include <iostream>
#include <cstdlib>
#define ll long long
using namespace std;
struct Node
{
    ll int data;
    struct Node *next;
    struct Node *prv;
}*head,*one,*two,*three,*four,*five,*tail;
struct Node * newnode(ll int data)
{
    struct Node *newnode=(struct Node *) malloc(sizeof(struct Node));
    if(newnode==NULL)
    {
        cout<<"No memory!";
        exit(1);
    }
    newnode->data=data;
    newnode->prv=NULL;
    newnode->next=NULL;
    return newnode;
}
void printList(struct Node *);
void InsertHead(ll int data);
void InsertPos(ll int data, int pos);
void InsertEnd(ll int data);
void DelList(ll int pos);
int main()
{
    one = newnode(17);
    two = newnode(13);
    three=newnode(21);
    four=newnode(41);
    five=newnode(16);
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=five;
    five->next=NULL;
    one->prv=NULL;
    two->prv=one;
    three->prv=two;
    four->prv=three;
    five->prv=four;
    head=one;
    tail=five;
    printList(head);
    while(1)
    {
        cout<<"\nInput data and position:(Enter position 0 to end): ";
        ll int data;
        int pos;
        cin>>data>>pos;
        if(pos==0) break;
        InsertPos(data,pos);
        printList(head);
    }

    while(1)
    {
        cout<<"\nInput data at end(0 to end):";
        ll int data;
        cin>>data;
        if(data==0) break;
        InsertEnd(data);
        printList(head);
    }
    while(1)
    {
        cout<<"\nDelete data ? Enter position(0 to end):";
        ll int pos;
        cin>>pos;
        if(pos==0) break;
        DelList(pos);
        printList(head);
    }
    return 0;
}
void printList(struct Node *p)
{
    if(p->prv==NULL)
    {
        cout<<"Current List :";
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
        return ;
    }
    if(p->next==NULL)
    {
        cout<<"Reverse List :";
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->prv;
        }
        return ;
    }
}
void InsertHead(ll int data)
{
    struct Node *nn=newnode(data);
    nn->next=head;
    head->prv=nn;
    head=nn;
}
void InsertPos(ll int data, int pos)
{
    struct Node *nn=newnode(data),*p=head;
    if(pos==1) InsertHead(data);
    else
    {
        for(int i=0; i<pos-2; i++) p=p->next;
        nn->next=p->next;
        nn->prv=p;
        struct Node *curr=p->next;
        curr->prv=nn;
        p->next=nn;
    }
}
void InsertEnd(ll int data)
{
    struct Node *nn=newnode(data),*p=head;
    while(p->next != NULL) p=p->next;
    p->next=nn;
    nn->prv=p;
}
void DelList(ll int pos)
{
    struct Node *p1=head;
    if (pos==1)
    {
        head=head->next;
        head->prv=NULL;
        free(p1);
    }
    for(int i=0; i<pos-2; i++) p1=p1->next;
    struct Node *p2=p1->next;
    if(p2->next!=NULL)
        p2->next->prv=p1;
    p1->next=p2->next;
    free(p2);
}

