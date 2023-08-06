#include <iostream> #include <cstdlib>
#define ll long long
using namespace std;
struct Node
{
    ll int data;
    struct Node *next;
    struct Node *prv;
}*head,*one,*two,*three,*four,*five,*tail;
void printList(struct Node *);
int main()
{
    one = (struct Node *) malloc(sizeof(struct Node));
    two = (struct Node *) malloc(sizeof(struct Node));
    three = (struct Node *) malloc(sizeof(struct Node));
    four=(struct Node *) malloc(sizeof(struct Node));
    five=(struct Node *) malloc(sizeof(struct Node));
    one ->data=17;
    two->data=13;
    three->data=21;
    four->data=41;
    five->data=16;
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
    cout<<"Front List :";
    printList(head);
    cout<<"\nReverse List :";
    printList(tail);
    return 0;
}
void printList(struct Node *p)
{
    if(p->prv==NULL)
    {
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
        return ;
    }
    if(p->next==NULL)
    {
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->prv;
        }
        return ;
    }
}

