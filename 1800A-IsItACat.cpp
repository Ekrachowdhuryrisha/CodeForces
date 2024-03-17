#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;

    while(test-->0)
    {
        int n;
        cin>>n;
        string s,t;
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0; i<s.size(); i++){
            if(s[i]!=s[i+1]){
                t+=s[i];
            }
        }

        if(t=="meow"){
        cout<<"YES"<<endl;
        }
        else{
           cout<<"NO"<<endl;
        }
    }
    return 0;
}

