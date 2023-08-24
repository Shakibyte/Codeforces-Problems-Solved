#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<char>vec;
string str;
cin>>str;
transform (str.begin(),str.end(),str.begin(), :: tolower);
for(int i=0; i<str.length(); i++)
{
	if(str[i]== 'a' ||str[i]== 'e' ||str[i]== 'i' ||str[i]== 'o' ||str[i]== 'u'||str[i]== 'y' )
	{
		continue;
	}
  char ter = str[i];
  char dot= '.';
  vec.push_back(dot);
  vec.push_back(ter);
}

for(auto it : vec)
{
	cout<<it;
}
return 0;
}
