#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,x;
    cin>>l>>r;
    int len=sizeof(r);
    int arr[len];
    for(int i=l; i<=r; i++)
    {
        x=i;
        int c=0;
        while(x>0)
        {
            arr[c]=(x%10);
            x=x/10;
            c++;
        }
        int count=0;
        sort(arr,arr+c);
        for(int j=0; j<c; j++)
        {

            if(arr[j]!=arr[j+1])
            {
                count++;
            }
        }
        if(count==c)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;

    return 0;
}
