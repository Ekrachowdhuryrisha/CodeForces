#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        if(n%2!=0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<(n/4)+1<<endl;
        }
    }
    return 0;
}
