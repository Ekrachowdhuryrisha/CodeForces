
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, b=0;
    cin>>n;
    int d[n];
    //vector<int> d;
    string s;
    cin>>s;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0){
            reverse(s.begin(), s.begin()+i);

        }

    }
    cout<<s;

return 0;
}

