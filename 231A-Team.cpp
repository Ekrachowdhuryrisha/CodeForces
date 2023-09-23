#include<stdio.h>
int main(){
 int i,n,a,b,c;
 int nop=0; ///nop=number of problem
 scanf("%d", &n);
 for(i=0; i<n; i++){
    scanf("%d%d%d", &a, &b, &c);
    if((a==1 && b==1 && c==1) || (a==1 && b==1 && c==0)|| (a==1 && b==0 && c==1)|| (a==0 && b==1 && c==1)){
       nop=nop+1;
    }
 } printf("%d\n", nop);

return 0;
}
