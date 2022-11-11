#include<stdio.h>

extern inline int mul(int a, int b);
inline int mul(int a, int b) { return(a*b); }

int main(){
   int c;
   c=mul(2,3);
   printf("Multiplication:%d",c);
   return 0;
}