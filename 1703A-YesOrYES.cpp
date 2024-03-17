#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test;
    cin>>test;
    while(test-->0)
    {
        string s;
        cin>>s;
        char str[4];

        for(int i=0; i<s.size(); i++)
        {
            str[i]=tolower(s[i]);

        }

        if(str[0]=='y' && str[1]=='e' && str[2]=='s')
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
