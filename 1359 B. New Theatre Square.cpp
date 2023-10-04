#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void print()
{
ll n,m,x,y;
cin>>n>>m>>x>>y;
ll sum =0;
vector<string>str(n);
for(int i=0; i<n; i++)
{
    cin>>str[i];
}
for(int i=0; i<n; i++)
{
    for(int j=0; j<m; j++)
    {
        if((str[i][j]=='.') && (str[i][j]!=str[i][j+1]))
        {
            sum+=x;
        }
        else if(str[i][j]=='.'&& (j+1<m) && str[i][j+1]=='.')
        {
            sum+= min(2*x,y);
            j++;
        }
    }
}
cout<<sum<<endl;
}
int main()
{
int t;
cin>>t;
for(int i=1; i<=t; i++)
{
    print();
}
return 0;
}
