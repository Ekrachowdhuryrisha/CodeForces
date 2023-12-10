#include<bits/stdc++.h>
using namespace std;
int main(){

long long int n,count=0, count1=0;
cin>>n;
if(n%2!=0){
    for( long long int i=0; i<n; i++){
    count=i-(i+1);
    count1=count+count1;
    i++;
}
cout<<count1<<endl;
}
else if(n%2==0){
    count1=n/2;
    cout<<count1<<endl;
}

return 0;
}
