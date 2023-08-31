#include<bits/stdc++.h>
using namespace std;
int main()
{
int lamp,b;
cin>>lamp>>b;
int total=lamp, remain=0, newl=0;

for(int i=0; lamp>=b; i++)
{
newl = lamp/b;
total= total+newl;
remain= lamp%b;
lamp = newl+remain;
}

cout<<total;
return 0;
}
