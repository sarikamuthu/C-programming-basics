/*Write a function which prints all the 
prime numbers present in a 5 digit prime number. eg, 
11237 -> 11,23,37,13,17*/
#include<stdio.h>
int check_prime(int a){
    
    int count;
    int prime=0;
    for(count=2;count<a;count++){
        if(a%count==0){
            // printf("Not prime");
            prime=1;
            return 1;
            break;
        }
    }
    if(!prime){
        return a;
    }  
}
int reverse(int n){
    int a = 0, remainder;
    // printf("Enter an integer: ");
    // scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        a = a * 10 + remainder;
        n /= 10;
    }
    return a;
}
int main(){
    int m,rem;
    int a=0;
    int s,t,u;
    printf("Enter number:\n");
    scanf("%d",&m);
    while(m>0){
        rem = m % 10;
        s=check_prime(rem);
        printf("%d ",s);
        // t=reverse(s);
        // u=check_prime(t);
        // printf("%d ",u);
        // a = a * 10 + rem;
        // m /= 10;
    }
    

    return 0;
}