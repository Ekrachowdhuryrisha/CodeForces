#include<bits/stdc++.h>
using namespace std;
int main(){
   int y;
   cin >> y;
   y++;
   while(true){
        int temp=y;
  int a= temp%10;
  temp/=10;
   int b= temp%10;
   temp/=10;
  int c= temp%10;
  temp/=10;

 if(a==b || a==c || a==temp || b==c || b==temp || c==temp){
     y++;
} else{
  cout << y << endl;
  break;
}
  }

return 0;
}
