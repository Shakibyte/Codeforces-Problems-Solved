#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int i=1;
int ans =0;
for(int i=1; n>0; i++)
{
if(n%2==1)
{
    ans++;
}
n=n/2;

}
cout<<ans;
return 0;
}
