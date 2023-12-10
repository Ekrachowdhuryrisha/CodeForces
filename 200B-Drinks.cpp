#include<bits/stdc++.h>
using namespace std;
int main(){

double n, p, c;

cin>>n;
double sum=0;
for(double i=0; i<n; i++){
    cin>>p;
    sum=sum+p;
}
c=sum/n;
cout<<setprecision(12)<<fixed;
cout<<c<<endl;
return 0;
}
