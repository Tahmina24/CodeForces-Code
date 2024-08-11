#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,j,n;
    for(i=1;i<=5;i++)//row
    {
        for(j=1;j<=5;j++)//column
        {
         cin>>n;
         if(n==1)
         {
             cout<<abs(i-3)+abs(j-3)<<endl;
             break;
         }
        }
    }
}
