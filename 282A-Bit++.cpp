#include<bits/stdc++.h>

using namespace std;

int main(){
int n,X=0;
 cin>>n;
 for(int i=0; i<n; i++){
    string st;
    cin>>st;

 if (st[1] == '+'){
    X++;
 } else{
      X--;
 }
 }
cout<<X;

return 0;
}
