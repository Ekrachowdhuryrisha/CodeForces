#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int arr[7];
    while(cin>>n)
    {
        for (int i=0; i<7; i++)
        {
            cin>>arr[i];
        }

        int r=0;
        while(n>0)
        {
            for (int i=0; i<7; i++)
            {
                n=n-arr[i];
                if (n<=0)
                {
                    r=i+1;
                    break;
                }
            }
        }
        cout <<r<<endl;
    }

    return 0;
}
