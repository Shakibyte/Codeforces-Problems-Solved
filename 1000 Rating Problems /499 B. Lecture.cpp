#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<pair<string,string>>vec1;
vector<string>vec2;
vector<string>vec3;
int n, m;
cin>>n>>m;
for(int i=0; i<m; i++)
{
    string s1, s2;
    cin>>s1;
    cin>>s2;
    if(s1.length()>s2.length())
    {vec1.push_back(make_pair(s1,s2));}
    else if(s1.length()<s2.length())
    {
        vec1.push_back(make_pair(s2,s1));
    }
    else if(s1.length()== s2.length())
    {
        vec1.push_back(make_pair(s2,s1));
    }
}
for(int i=0; i<n; i++)
{
    string s3;
    cin>>s3;
    vec2.push_back(s3);
    for( int j =0; j<m; j++)
    {
        if(vec2[i]==vec1[j].first || vec2[i]== vec1[j].second)
        {
            vec3.push_back(vec1[j].second);
        }
        else
        {
            continue;
        }

    }
}

for(auto s: vec3)
{
    cout<<s<<" ";
}
return 0;
}
