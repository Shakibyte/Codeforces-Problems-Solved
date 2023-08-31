#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,t;
cin>>n>>t;
vector<int>str;
int k=0;
int temp=0;
for(int i=0; i<n-1; i++)
{
 int x;
 cin>>x;
 str.push_back(x);
  if(i==0)
  {
    temp =i+1;
    if(temp==t)
    {
        k++;
        break;
    }
    temp = i+1+(str[i]);
    if(temp==t)
    {
        k++;
        break;
    }
  }
  else if(i>0 && (i+1)!=temp)
  {
    continue;
  }
  else if(i>0 && (i+1)==temp)
  {
    temp= i+1+(str[i]);
    if(temp==t)
    {
        k++;
        break;
    }
  }
}
if(k>0)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
return 0;
}
