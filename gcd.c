#include<stdio.h>
int a,b;
int gcd(int a,int b){
  if(b==1){
    return a;
  }
  else{
    return gcd(b,a%b);
}
}

int main(){
  printf("Enter value of a and b:\n");
  scanf("%d %d",&a,&b);
    printf("The GCD is %d",gcd(a,b));
  return 0;
}