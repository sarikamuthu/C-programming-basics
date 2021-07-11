#include<stdio.h>
int main(){
    int n,r,a,sum=0;
    printf("Enter number:\n");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        a=r*r*r;
        sum=sum+a;
        n=n/10;
    }
    
    if(n==sum){
        printf("It is a armstrong number");
    }
    else{
        printf("It is not a armstrong number");
    }
    return 0;
}