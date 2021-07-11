#include <stdio.h>
int main(){
    int celsius;
    printf("Enter celsius:\n");
    scanf("%d",&celsius);
    int farenheit=((1.8)*celsius)+32;
    printf("The farenheit is:%d\n",farenheit);



    return 0;

}