#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int n= s.length();
bool c = true;

for(int i=1; i<n; i++)
{
    int a= s[i];
    if(islower(a))
    {
        c= false;
    }
}

int a = s[0];
if(c==true && islower(a))
{
   s[0]= toupper(a);
  for( int i=1 ; i<n; i++)
  {
    int b= s[i];
    s[i]= tolower(b);
  }
}
else if( c==true && isupper(a))
{
    for(int j=0; j<n; j++)
    {
     int d= s[j];
     s[j]=tolower(d);
    }
}

cout<<s;

return 0;
}
