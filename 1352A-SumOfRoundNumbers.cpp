#include<bits/stdc++.h>
using namespace std;
int main(){
int test;
cin>>test;
while(test-->0){
    int n,c=0;
    cin>>n;
    string s = to_string(n);
    int len = s.size();


    for(int i=0; i<len; i++){
    if(s[i]!='0'){
        c++;
    }
    }
    cout<<c<<endl;

    for(int i=0; i<len; i++){
        if(s[i]!='0'){
            cout<<s[i];
            for(int j=i+1; j<len; j++){
                cout<<0;
            }
           cout<<" ";
        }

    }
    cout<<endl;


}


return 0;
}


