#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
cin>>str;
int j=0;
string str2="hello";
for(int i=0; i<str.length(); i++)
{
    if(str[i]==str2[j])
    {
       j++;
    }
    else
    {
        continue;
    }
}

if(j==str2.length())
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}

return 0;
}
