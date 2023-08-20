#include <bits/stdc++.h>

using namespace std;
void isfull(struct node *p);
int isempty();
struct node
{
    int data;
    struct node *next;
} *top=NULL;
struct node* Newnode(int a)
{
    struct node *Newnode=(struct node *)malloc(sizeof(struct node));
    isfull(Newnode);
    Newnode->data=a;
    Newnode->next=NULL;
    return Newnode;
}
void isfull(struct node* p)
{
    if(!p)
    {
        cout<<"Heap Memory is full";
        exit(1);
    }
    else return;
}
int isempty()
{
    if(top==NULL) return 1;
    else return 0;
}
void push(int data)
{
    struct node *newnode=Newnode(data);
    if(isempty())
        top=newnode;
    else
    {
        newnode->next=top;
        top=newnode;
    }
}
void pop()
{
    if(isempty())
    {
        cout<<"List Empty";
        exit(1);
    }
    else
    {
        struct node* p=top;
        top=top->next;
        printf("Deleted Element : %d\n",p->data);
        free(p);
    }
}
void show()
{
    struct node *p=top;
    cout<<"Current Stack: ";
    while(p!=NULL)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<endl;
}
void peek()
{
    cout<<"Top Element: "<<top->data<<endl;
}
int main()
{
    push(1);
    push(5);
    push(3);
    peek();
    push(9);
    push(11);
    show();
    pop();
    show();
    pop();
    peek();
    pop();
    pop();
    pop();
    pop();
    return 0;
}
