#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int temp=0, count=0;
        for(int i=0; i<n; i++){
            if(arr[i]>=k){
                temp+=arr[i];
            }
            else if(arr[i]==0 && temp>0){

                count++;
            temp--;
            }
        }
        cout<<count<<endl;

    }


    return 0;
}
