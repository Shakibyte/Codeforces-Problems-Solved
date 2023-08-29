#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<pair<int,int>>vec;
int s , n;
int strength=0;
cin>>s>>n;
for(int i=0; i<n; i++)
{
    int x,y;
    cin>>x>>y;
    vec.push_back(make_pair(x,y));
}
sort(vec.begin(), vec.end());
for( int i=0; i<vec.size(); i++)
{
    if(i==0 && s> vec[i].first)
    {
        strength = s+ vec[i].second;
    }
    else if( i>0 && strength > vec[i].first)
    {
        strength=strength+vec[i].second;
    }
}

if( strength> vec[vec.size()-1].first)
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}

return 0;
}
