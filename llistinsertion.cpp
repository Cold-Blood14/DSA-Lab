#include <bits/stdc++.h>
using namespace std;
#define ll long long
void insertion(int val,int pos);
void insertionEnd(int val);
struct node
{
    ll int value;
    struct node *next;
}*head;
void printList(struct node *p);
int main()
{
    ll int n,pos,val;
    struct node *one,*two,*three,*four,*five;
    one   = (struct node *) malloc(sizeof(struct node));
    two   = (struct node *) malloc(sizeof(struct node));
    three = (struct node *) malloc(sizeof(struct node));
    four  = (struct node *) malloc(sizeof(struct node));
    five  = (struct node *) malloc(sizeof(struct node));
    head=one;
    one->next  = two;
    two->next  = three;
    three->next= four;
    four->next = five;
    five->next = NULL;
    struct node * p= head;
    for(int i=2; p!=NULL; i=i*5)
    {
        p->value=i;
        p=p->next;
    }
    while(1)
    {
        printf("Current List: ");
        printList(head);
        printf("\nEnter new data's value and position(0 to end): ");
        cin>>val>>pos;
        if(pos == 0 ) break;
        insertion(val,pos);
    }
    while(1)
    {
        cout<<"\nEnter end data ( not 0): ";
        cin>>val;
        if(val==0) break;
        insertionEnd(val);
    }
    return 0;
}
void insertion(int val, int pos)
{
    struct node *newnode = (struct node *) malloc(sizeof(struct node));
    newnode->value=val;
    struct node *p=head;
    if(pos==1)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        for(int i=1; i<pos-1; i++)
            p=p->next;
        newnode->next=p->next;
        p->next=newnode;
    }
}
void insertionEnd(int val)
{
    struct node *newnode = (struct node *) malloc(sizeof(struct node));
    newnode->value=val;
    struct node *p=head;
    while(p->next!=NULL)
        p=p->next;
    newnode->next=p->next;
    p->next=newnode;
    printf("Current List: ");
    printList(head);
}

void printList(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->value<<" ";
        p=p->next;
    }
}

