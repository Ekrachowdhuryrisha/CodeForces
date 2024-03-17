#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[128];
    string s;
    cin>>s;
    int n=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+')
        {
            continue;
        }
        else
        {
            arr[n]=s[i]-48;
            n++;
        }
    }

    sort(arr, arr+n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
        if(i==n-1)break;
        cout<<'+';
    }
    return 0;
}
