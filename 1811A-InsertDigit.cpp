#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;

    while(test-->0)
    {
        int n, d;
        cin>>n>>d;
        string s;
        cin>>s;
        int c=0, count=-1;
        for(int i=0;i<n; i++)
        {
            c=s[i]-48;
            if(d>c)
            {
               count=i;
               break;
            }

        }
        //cout<<count<<endl;
        if(count==-1){
            cout<<s<<d<<endl;
        }else{

        s.insert(count,to_string(d));
        cout<<s<<endl;
        }

    }
    return 0;
}
