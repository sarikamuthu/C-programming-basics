#include<stdio.h>

int main(){
    int n;
    int r=0;
    int odd,even,difference=0;
    // printf("Enter 5 digit number:\n");
    // scanf("%d",&n);
    n=12345;
    while(n!=0){
        r=n%10;
        if(r%2==0){
            even+=r;
        }
        else{
            odd+=r;
        }
        n=n/10;
    }
    difference=odd-even;
    printf("%d",difference);
    

    return 0;
}