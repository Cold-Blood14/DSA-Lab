#include <iostream>
#include <iterator>
#include <list>
using namespace std;
void showlist(list<int> x)
{
    list<int> ::iterator i;
        for(i=x.begin(); i!=x.end(); ++i)
            cout<<*i<<'\t';
    cout<<endl;
}
int main(){
    list<int> l1,l2;
    for(int i=0;i<5;i++){
        l1.push_back(2*i-9);
        l2.push_front(i*10);
    }
    cout<<"\nList 1: ";
    for(auto i:l1)
        cout<<i<<" ";
        cout<<endl;
    cout<<"\nList 2: ";
    for(auto i:l2)
        cout<<i<<" ";
        cout<<endl;
    list<int>::iterator i;
    i=l1.begin();
    advance(i,3);
    l1.insert(i,23);
    i=l2.begin();
    advance(i,2);
    l2.insert(i,20);
    l2.insert(l2.begin(),100);
    cout<<"\nList 1 v2: ";
    showlist(l1);
    cout<<"\nList 2 v2: ";
    showlist(l2);
    l1.push_back(2);
    l1.pop_front();
    l1.pop_back();
    l1.push_front(5);
    l2.sort();
    cout<<"\nList 1 v3: ";
    showlist(l1);
    cout<<"\nList 2 v3: ";
    showlist(l2);
    return 0;
}


