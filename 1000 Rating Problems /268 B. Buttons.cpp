#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int k=3;
int d=4;
int total =3;
if(n==1)
{
    total=1;
}
else if( n==2)
{
total = 3;
}
else if(n>2)
{
for( int i=3; i<=n; i++)
{
   total = total + d;
   d= d+k;
   k++;
}
}
cout<<total<<endl;
return 0;
}
