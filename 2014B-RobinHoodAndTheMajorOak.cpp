#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,k;
        cin>>n>>k;

        int  sum=((n+1)*n/2 - (n-k+1)/2);

        if(sum%2==0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }

    }

    return 0;
}
