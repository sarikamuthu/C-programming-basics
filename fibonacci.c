#include <stdio.h>
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }

}
int main(){
    int n,c;
    int i=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for ( int c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", fib(i));
      i++; 
   }



    return 0;
}
// int main(){
    // int n,a=0,b=1,c;
    // printf("Enter number: ");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     printf("%d\n",a);
    //     c=a+b;
    //     a=b;
    //     b=c;
    // }

    
    //     return 0;
    // }




    