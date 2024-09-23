#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t-->0){
    int n,k;
    cin>>n>>k;
    int sum=0, temp= n-k;
    if(n<=k){
    for( int i=1; i<=n; i++){
        sum= sum+ pow(i,i);
    }
    }
    else{
        for(int i=n; i>=(n-temp); i--){
            sum= sum+pow(i,i);
        }
    }


    if(sum%2==0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

}



return 0;
}
