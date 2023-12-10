#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test,a,b, count;
   cin>>test;
    while(test-->0)
    {
        cin>>a>>b;
        count=0;
        if(a%b==0)
        {
          cout<<"0"<<endl;
        }
        else{
               count=((a/b)+1)*b;
                cout<<count-a<<endl;
        }
    }

    return 0;
}
