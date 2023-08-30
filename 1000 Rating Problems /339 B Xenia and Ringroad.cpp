#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n, m;
cin>>n>>m;
vector<int>vec;
long long time=0;

for(long long i=0; i<m; i++)
{   long long task;
    cin>>task;
    vec.push_back(task);
    if(i==0 && vec[0]>1)
    {
      time = (vec[0])-1;
    }
    else if ( i>0 && vec[i]>vec[i-1])
    {
        time = time + ((vec[i])-(vec[i-1]));
    }
    else if (i>0 && vec[i]<vec[i-1])
    {
        time = time + (n-(vec[i-1])+(vec[i]));
    }
}
cout <<time;
return 0;
}
