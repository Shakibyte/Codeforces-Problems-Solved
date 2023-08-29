#include<bits/stdc++.h>
using namespace std;

int getmax(int a, int b, int c)
{
int maximum= INT_MIN;
int t1= (a+b)*c;
maximum = max(maximum,t1);
int t3 =(b+c)*a;
maximum = max(maximum,t3);
int t4 =(a*b)+c;
maximum = max(maximum,t4);
int t6=(b*c)+a;
maximum = max(maximum,t6);
int t7 = a*b*c;
maximum = max(maximum,t7);
int t8 = (a+b)+c;
maximum = max(maximum,t8);
return maximum;
}
int main()
{
int a,b,c;
cin>>a>>b>>c;
int maximum= getmax(a,b,c);
cout<<maximum;
return 0;
}
