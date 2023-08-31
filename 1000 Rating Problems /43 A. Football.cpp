#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int  goal1=0, goal2=0;
string str;
string team1;
string team2;
for(int i=0; i<n; i++)
{
   cin>>str;
   if(i==0)
   {
      team1=str;
      goal1++;
   }
   else if(i>0 && str==team1 )
   {
            team1=str;
            goal1++;
   }
   else if ( i>0 && str!=team1)
   {
      team2 = str;
      goal2++;
   }
}

if(goal1>goal2)
{
   cout<<team1;
}
else{
   cout<<team2;
}

return 0;
}
