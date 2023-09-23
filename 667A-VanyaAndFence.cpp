#include<stdio.h>

int main(){
  int n,h,sum=0;
  scanf("%d%d", &n, &h);
  int a;
  for(int i=1; i<=n; i++){
    scanf("%d/n", &a);
    if(a>h){
     sum+=2;
    } else{
    sum++;
    }

  }
printf("%d", sum);
return 0;
}
