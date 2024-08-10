#include<bits/stdc++.h>
#define max 1000
using namespace std;
int main()
{
    int i,n,k,count=0,a[max];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key=a[k-1];
    for(i=0;i<n;i++)
    {
        if(a[i]>=key && a[i]!=0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
