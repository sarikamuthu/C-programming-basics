#include<stdio.h>
int a,b,c,key;
int cnt(int a){
    int count=0;
    if(a==0){
        return count;
    }
    else{
    for(int i=1;i<=4;i++){
    b=a%10;
    c=b;
    if(c==key){
        count++;
    }
    a=a/10;

    }
    return count;
}
}
int main(){
    int a;
    printf("Enter number:\n");
    scanf("%d",&a);
    printf("Enter key:\n");
    scanf("%d",&key);
    printf("Answer is %d",cnt(a));
    return 0;
}
// int main(){
//     int i,b,c;
//     int count=0;
//     int a=1111;
//     for(int i=1;i<=4;i++){
//     b=a%10;
//     c=b;
//     if(c==1){
//         count++;
//     }
//     // else{
//     //     continue;
//     // }
//     a=a/10;
    
    
 
//     }
//     printf("%d",count);
//     return 0;
// }