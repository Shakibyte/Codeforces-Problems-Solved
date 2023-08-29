#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
cin>>str;
int num =stoi(str);
int k=0;
int div=0;
for(int i=0; i<=num; i++)
{
    if(str[i]-'0'==4 || str[i]-'0'==7)
    {
      k++;
    }
    else if(i>0 && (num)%i==0 &&  (i==4||i==7||i==47||i==74||i==44||i==77||i==444||i==447||i==474||i==477||i==744||i==747||i==774||i==777))
    {
        div=1;
    }
}

if(div==1 || k==str.length())
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}
return 0;
}
