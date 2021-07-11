# include<stdio.h>
int main(){
    // multiplication table
    // for(int i=1;i<11;i++){
    //     printf("2 x %d = %d\n",i,10*i);
    
    // }
    
    // sum of n natural numbers
    // int i=1,sum=0,n=10;
    
    // for(i=0;i<=n;i++){
    //     sum+=i;
    // while(i<=n){
    //     sum+=i;
    //     i++;
    // }
    //     printf("The sum of %d natural numbers is %d",n,sum);

    // factorial of a number
    // int i=1,n=5,factorial=1;
    // for(i=1;i<=5;i++){
    // factorial*=i;
    // }
    // while(i<=n){
    //     factorial*=i;
    //     i+=1;
    
    
    // printf("The factorial of %d is %d",n,factorial);

    // To check prime number or not
    int i,n;
    printf("Enter number");
    scanf("%d",&i);
    for(n=2;n<=i;n++){
    if(i%n==0){
        printf("%d is not a prime number",i);
        break;
    }
    else{
        printf("%d is a prime number",i);
        break;
    }
    }
    return 0;
}