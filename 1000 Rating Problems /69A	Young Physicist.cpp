#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int totalx=0,totaly=0,totalz=0;
while(n--)
{
int a,b,c;
cin>>a>>b>>c;
totalx=totalx+a;
totaly=totaly+b;
totalz=totalz+c;
}
if(totalx==0 && totaly==0 && totalz==0)
{
	cout<<"YES";
}
else
{
	cout<<"NO";
}

return 0;
}
