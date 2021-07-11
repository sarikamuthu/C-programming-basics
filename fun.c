#include <stdio.h>
#include <stdlib.h>
int difference(long n){
    int a=0;
   int difference =0;
   int even=0;
   int odd=0;
   
   while(n != 0){
      a = n%10;
      if(a % 2 == 0) {
         even+=a;
      } else {
         odd+=a;
      }
      n/=10;
   }
   difference=odd-even;
   return abs(difference);  
}
int main() {
  long n;
  printf("Enter number:\n");
  scanf("%d",&n);
  printf("The difference between the sum of odd digits and even digits of a 6 digit number is %d",difference(n));
   return 0;
}