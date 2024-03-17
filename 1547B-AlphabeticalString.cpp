#include<bits/stdc++.h>
using namespace std;
int main()
{

    long int test;
    cin>>test;
    while(test-->0)
    {
        string s;
        cin>>s;
        int count=0, k=-1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='a')
            {
                k=i;
                break;
            }
        }
        if(k==-1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            char ch ='b';
            int i=k-1, j=k+1;
            while( i>=0 || j<s.size())
            {
                if(s[i]==ch)
                {
                    ch++;
                    i--;
                }
                else if(s[j]==ch){
                    ch++;
                    j++;
                }
                else
                {
                    count=1;
                    break;
                }
            }

            if(count==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }

    return 0;
}
