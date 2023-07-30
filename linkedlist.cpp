#include <bits/stdc++.h>
using namespace std;
#define ll long long
void printList(struct node *p);
struct node
{
    ll int value;
    struct node *next;
}*head;
int main()
{
    ll int n,pos;
    struct node *one=,*two,*three,*four,*five;
    one   = (struct node *) malloc(sizeof(struct node));
    two   = (struct node *) malloc(sizeof(struct node));
    three = (struct node *) malloc(sizeof(struct node));
    four  = (struct node *) malloc(sizeof(struct node));
    five  = (struct node *) malloc(sizeof(struct node));
    head=one;
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=five;
    five->next=NULL;
    struct node * p= head;
    for(int i=2; p!=NULL; i=i*5)
    {
        p->value=i;
        p=p->next;
    }
    printList(head);
    return 0;
}
void printList(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->value<<" ";
        p=p->next;
    }
}
