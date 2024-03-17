#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false),cin.tie(NULL);
    int test;
    cin>>test;
    while(test-->0)
    {
        long long int a,b,n,m,l,sum=0, count=1;
        cin>>a>>b>>n;
        m=min(a,b);
        l= max(a,b);

        m=m+l;
        if(m>n)
        {
            cout<<count<<endl;

        }
        else
        {
            while(sum<=n)
            {
                sum=m+l;
                l=m;
                m=sum;
                count++;
            }
            cout<<count<<endl;
        }

    }

    return 0;
}

