#include<bits/stdc++.h>
using namespace std;
int main()
{
long double n ,m,a;
cin>>n>>m>>a;
long long len1, he1;
long double len2, he2;
long long stone;
len1= n/a;
he1= m/a;
len2= n/a;
he2=m/a;
if(len1==len2 && he1==he2)
{
stone = len1 * he1;
}
else if(len1!=len2 && he1==he2)
{
  len1=len1+1;
  stone =len1*he1;
}
else if(len1==len2 && he1!=he2)
{
  he1=he1+1;
  stone =len1*he1;
}
else if(len1!=len2 && he1!=he2)
{
  len1=len1+1;
  he1= he1+1;
  stone =len1*he1;
}

cout<<stone;

return 0;
}
