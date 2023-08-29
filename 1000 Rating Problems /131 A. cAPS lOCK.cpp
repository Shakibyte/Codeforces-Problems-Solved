#include<bits/stdc++.h>
using namespace std;
int main()
{

string str;
cin>>str;
int up=0;
int low=0;
int first=0;
int n= str.length()-1;
for(int i=0; i<str.length(); i++)
{
    int a= str[i];
   if(i==0 && islower(a))
   {
     first++;
   }
    else if(i>0 && islower(a))
    {
        low++;
    }
    else if(i>0 && isupper(a))
    {
        up++;
    }
}

if(first==1 && low==0)
{
    for(int i=0; i<str.length(); i++)
{
    int a= str[i];
    int s = str[0];
    if(i==0 && islower(s))
    {
        str[0]= toupper(s);
    }
    else if( i>0 && isupper(a))
    {
        str[i]= tolower(a);
    }
    else
    {
       continue;
    }
}
}
else if( up==n)
{
    for(int i=0; i<str.length(); i++)
    {
        int c= str[i];
        str[i]= tolower(c);
    }
}


cout<<str;
}
