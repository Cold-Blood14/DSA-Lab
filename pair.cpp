#include <iostream>
#include <iterator>
#include <utility>
using namespace std;
int main(){
pair <int, int> p1,p2(30,40),p3;
p1=make_pair(20,30);
p3=(p1);
cout<<"P1 "<<p1.first<<" "<<p1.second;
cout<<"\nP2 "<<p2.first<<" "<<p2.second;
cout<<"\nP3 "<<p3.first<<" "<<p3.second<<endl;
p1==p2? cout<<"T\n" : cout<< "F\n";
p1>=p3? cout<<"T\n" : cout<< "F\n";

}
