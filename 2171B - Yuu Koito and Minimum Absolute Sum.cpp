#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int arr[n], b[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

     int sum=0, s=arr[0], l=arr[n-1];
         if(arr[0]!= -1 && arr[n-1]!= -1){
            sum=abs(arr[n-1]-arr[0]);
         }
         else{
            if(arr[0]==-1 && arr[n-1]==-1){
                s=0;
                l=0;
            }
            else if(arr[0]==-1){
                s=arr[n-1];
            }
            else{
                l=arr[0];
            }
         }
    arr[0]=s;
    if(n>1){
        arr[n-1]=l;
    }
        for(int i=1; i<n-1; i++){
            if(arr[i]== -1){
                arr[i]=0;
            }
        }

         cout<<abs(sum)<<endl;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    cout<<endl;
    }
    return 0;
}
 
