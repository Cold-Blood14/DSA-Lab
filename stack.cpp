#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
    stack <int> s;
    s.push(29);
    s.push(21);
    s.push(25);
    s.push(27);
    s.push(22);
    cout<<"The top element is:"<<s.top()<<endl;
    s.pop();
    cout<<"The top element is:"<<s.top()<<endl;
    s.push(20);
    s.push(43);
    s.push(75);
    s.push(37);
    s.push(52);
    cout<<"Stack :";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
