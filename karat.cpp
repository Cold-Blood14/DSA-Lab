// karatsuba
#include<bits/stdc++.h>
using namespace std;
string appendZero(string str,int n);
string karatsuba(string x,string y);
string multixy(string x,string y);
string addxy(string x,string y);
string subxy(string x,string y);
string removeZero(string str);
string multi10(string str,int n);
int main()
{
   string x,y;
   getline(cin,x);
   getline(cin,y);
  // cout<<x<<y<<endl;
   if(x=="0" || y=="0")
    cout<<"0";
   else
   {
       if(x.length()>y.length())
       y=appendZero(y,x.length()-y.length());
       else
       x=appendZero(x,y.length()-x.length());
       cout<<removeZero(karatsuba(x,y));
   }
    cout<<endl;
    return 0;
}



string appendZero(string str,int n)
{

    while(n>0)
    {
        str="0"+str;
        n--;
    }
    return str;
}



string removeZero(string str)
{
    reverse(str.begin(),str.end());
    for(int i=str.length()-1;i>=0; i--)
    {
        if(str[i]=='0')str.pop_back();
        else break;
    }
    if(str.empty())return "0";
    else
    {
        reverse(str.begin(),str.end());
        return str;
    }
}


string karatsuba(string x,string y)
{
    if(x.length()==1 && y.length()==1)return multixy(x,y);
    if(x.length()>y.length())
        y=appendZero(y,x.length()-y.length());
    else
        x=appendZero(x,y.length()-x.length());
    if(x.length()%2!=0)
    {
        x="0"+x;
        y="0"+y;
    }
    string x_left,x_right,y_left,y_right,p1,p2,p3;
    int n=x.length();
    x_left=x.substr(0,x.length()/2);
    x_right=x.substr(x.length()/2);
    y_left=y.substr(0,y.length()/2);
    y_right=y.substr(y.length()/2);
    p1=karatsuba(x_left,y_left);
    p2=karatsuba(addxy(x_left,x_right),addxy(y_left,y_right));
    p3=karatsuba(x_right,y_right);
    return addxy(addxy(multi10(p1,n),multi10(subxy(subxy(p2,p1),p3),n/2)),p3);

}


string multixy(string x,string y)
{
   int p=(((int)x[0]-'0')*((int)y[0]-'0'));
    return to_string(p);
}


string addxy(string x,string y)
{
    if(x.length()>y.length())
        y=appendZero(y,x.length()-y.length());
    else
        x=appendZero(x,y.length()-x.length());
    int c=0,s;
    string r="";
    for(int i=x.length()-1;i>=0; i--)
    {
        s=((int)x[i]-'0')+((int)y[i]-'0')+c;
        if(s>9)
        {
            r=to_string(s%10)+r;
            c=s/10;
        }
        else
        {
            r=to_string(s)+r;
            c=0;
        }
    }
    return r;

}


string subxy(string x,string y)
{
    if(x.length()>y.length())
        y=appendZero(y,x.length()-y.length());
    else
        x=appendZero(x,y.length()-x.length());
    string r="";
    int bo=0,a,b;
     for(int i=x.length()-1;i>=0; i--)
     {
         a=(int)x[i]-'0';
         b=(int)y[i]-'0';
         if(bo==1)a--;
         if(a>=b)
         {
             r=to_string (a-b)+r;
             bo=0;
         }
         else
         {
             a+=10;
             r=to_string (a-b)+r;
             bo=1;
         }
     }
     return r;
}


string multi10(string str,int n)
{
    while(n>0)
    {
        str=str+"0";
        n--;
    }
 return str;
}
