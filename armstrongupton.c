#include <stdio.h>
#include <math.h>

int main(){
  int count;
  int x,n, arm=0;
  scanf("%d",&count);
  for (int i = 1;i<count;i++){
    arm =0;
    x = i;
    n=i;
    while (n>0) {
      arm += pow(n%10,floor(log10(x))+1);
      n = n/10;
    }
    if (x == arm) printf("%d,",i);
  }
  printf("\n");
}
