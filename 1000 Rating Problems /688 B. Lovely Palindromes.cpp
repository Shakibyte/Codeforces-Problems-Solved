#include<bits/stdc++.h>
using namespace std;
int main()
{
string s1;
cin>>s1;
string s2=s1;
reverse(s2.begin(),s2.end());
string s3= s1+s2;
cout<<s3;
return 0;
}
