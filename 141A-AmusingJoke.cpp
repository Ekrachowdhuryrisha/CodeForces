#include<bits/stdc++.h>
using namespace std;

int main(){
string s1, s2,s,m;

cin>>s1>>s2>>m;
s=s1+s2;

sort(s.begin(), s.end());

sort(m.begin(), m.end());
if(s==m){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
