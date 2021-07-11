# include<stdio.h>
// // average 
// int average(int a,int b,int c);
// int main(){
//     int a=5;
//     int b=7;
//     int c=10;
//     printf("The average is %d\n",average(a,b,c));

   
//     return 0;
// }
// int average(int a,int b,int c){
//     int avg;
//     avg=(a+b+c)/3;
//     return avg;
// }
// int fibo(int n);
// int main(){
//     int n;
//     printf("Enter number:");
//     scanf("%d",&n);
    
//     printf("The fibonacci series of %d is %d",n,fibo(n));


//     return 0;
// }
// int fibo(int n){
//     if(n<=1){
//         return n;
//     }
//     else{
//         return fibo(n-1)+fibo(n-2);
//     }
// }

// pattern
// void pattern(int n);
// int main(){
//     int n=4;
//     pattern(n);
//     return 0;
// }
// void pattern(int n){
//     if(n==1){
//         printf("*\n");
//         return;
//     }
//     pattern(n-1);
//     for(int i=0;i<(2*n-1);i++){
//         printf("*");
//     }
//     printf("\n");
// }
int main(){
    char s[]="";
    scanf("%d %d %d %d %d %d",&s[0],&s[1],&s[2],&s[3],&s[4],&s[5]);
    printf("%s",s);


    return 0;
}