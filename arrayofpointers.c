#include <stdio.h>

const int MAX = 3; 

int main(){
  int var[] = {10,100,200};
  int *ptr[MAX];

  for(int i = 0; i<MAX; i++){
    ptr[i] = &var[i];
  }
  for(int i = 0; i<MAX; i++){
    printf("Value of var[%d] = %d stored at %p\n",i, *ptr[i],ptr[i]);
  }
}
