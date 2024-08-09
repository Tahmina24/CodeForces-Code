#include<iostream>
using namespace std;
int main()
{
    int i,t,p,v,tt,sum,count=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>p>>v>>tt;
        sum=p+v+tt;
        if(sum>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
