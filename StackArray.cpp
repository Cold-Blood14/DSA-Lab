#include <bits/stdc++.h>
#define ll long long
using namespace std;
int stck[100],top=-1;
int i,j;
void push(int a)
{
    if(top==99)
    {
        printf("Overflow\n");
        return;
    }
    else
    {
        top++;
        stck[top]=a;
        printf("Push Succesful\n");
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow\n");
        return;
    }
    else
    {
        printf("Deleted Element : %d\n",stck[top]);
        top--;
    }
}
void peek()
{
    cout<<"Top Element : "<<stck[top]<<'\n';
}
void show()
{
    cout<<"Stack Elements: ";
    for (int i=top; i>=0; i--) cout<<' '<<stck[i];
    cout<<endl;
}
void isfull()
{
    if(top==99) cout<<"Stack is full\n";
    else cout<<"Stack isn't full.";
}
void isempty()
{
    if(top==-1) cout<<"\nStack is empty";
    else cout<<"\nStack isn't empty";
}
int main()
{
    push(5);
    peek();
    push(6);
    peek();
    push(7);
    peek();
    push(8);
    peek();
    push(9);
    peek();
    show();
    pop();
    pop();
    pop();
    peek();
    show();
    isfull();
    isempty();
    return 0;

}
