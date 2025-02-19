#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int c=0;

        for(int i=0; i<n-1; i++){
            if(s[i]!= s[i+1]){
                c++;
            }
        }


        if(s[0]=='1'){
            c++;
        }

        cout<<c<<endl;

    }

    return 0;
}
