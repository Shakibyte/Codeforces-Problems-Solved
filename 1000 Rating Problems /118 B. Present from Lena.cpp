#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int row= n+1;

//upper triangle
for(int i=1; i<=row; i++)
{
    //upper spaces 
    for(int j=0; j<row-i; j++)
    {
        cout<<"  ";
    }
    //left side
    
    for(int j=0; j<i; j++)
    {
        if(i==1 && j==0)
        {
            cout<<j;
        }
        else
        {
            cout<<j<<" ";
        }
    }
   //right side
    for(int j=1; j<=i-1; j++)
    {
       if(j==1)
       {
         cout<<i-j-1;
       }
       else
       {
         cout<<" "<<i-j-1;
       }
    }
cout<<endl;
}

//lower triangle
for(int i=1; i<=row-1; i++)
{
    //lower space
    for(int j=1; j<=i; j++)
    {
        cout<<"  ";
    }
    
    //left side

    for(int j=0; j< row-i; j++)
    {
        if(j==row-i-1 && i==row-1)
        {
            cout<<j;
        }
        else
        {
            cout<<j<<" ";
        }
    }
    //right side
    
    for(int j=0; j<row-i-1; j++)
    {
        if(j==0)
        {
            cout<<row-i-2-j;
        }
        else
        {
            cout<<" "<<row-i-2-j;
        }
    }
    cout<<endl;
}
return 0;
}
