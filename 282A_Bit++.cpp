#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, x=0;
    string s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s;
        if(s=="X++" || s=="++X")
        {
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;
}
