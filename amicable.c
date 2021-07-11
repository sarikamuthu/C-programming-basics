#include<stdio.h>
int main(){
    int a,b,sum1=0,sum2=0;
    printf("Enter number:\n");
    scanf("%d",&a);
    printf("Enter number:\n");
    scanf("%d",&b);
    for(int i=1;i<=a/2;i++){
        if(a%i==0){
            sum1+=i;
        }
    }
    for(int i=1;i<=b/2;i++){
        if(b%i==0){
            sum2+=i;
        }
    }
if (sum1==b && sum2==a){
        printf("%d and %d are amicable numbers\n",a,b);
    }
    else{
        printf("%d and %d are not amicable numbers\n",a,b);
    }
    return 0;
}