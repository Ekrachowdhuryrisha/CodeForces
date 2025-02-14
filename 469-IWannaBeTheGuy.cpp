#include<bits/stdc++.h>
using namespace std;
int main(){
int n,p,q;
cin>>n>>p;
int arr[201];
for(int i=0; i<p; i++){
    cin>>arr[i];
}
cin>>q;
for(int i=p; i<p+q; i++){
    cin>>arr[i];
}

sort(arr, arr+(p+q));
int count=0;
for(int i=0; i<p+q; i++){
    if(arr[i]!=arr[i+1]){
        count++;
    }
}

if(count==n){
    cout<<"I become the guy."<<endl;
}
else{
    cout<<"oh, my keyboard!"<<endl;
}

return 0;
}
