#include <stdio.h>
int main(){
    FILE*ptr;
    ptr=fopen("sample.txt","r");
    printf("%s",ptr);

    return 0;
}