#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n], b[n], c[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        cin>>b[i];
        cin>>c[i];
    }
   int sum1=0, sum2=0, sum3=0;

    for(int i=0; i<n; i++)
    {

        sum1+=a[i];
    }
    for(int i=0; i<n; i++)
    {
        sum2+=b[i];
    }
    for(int i=0; i<n; i++)
    {
        sum3+=c[i];
    }

    if(sum1==0 && sum2==0 &&sum3==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
