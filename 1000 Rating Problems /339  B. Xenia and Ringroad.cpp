#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,m;
cin>>n>>m;
long long time =0;
long long present;
long long old=0;
for(long long i=0; i<m; i++)
{ 
    cin>>present;
    if(i==0)
    {
       time = time + (present-1);
    }
    else if (i>0 && present>old)
    {
        time = time + (present-old);
    }
    else if( i>0 && old>present)
    {
        time = time +n-old+present;
    }
    old=present;
}

cout<<time;


return 0;
}
