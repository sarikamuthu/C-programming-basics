#include<stdio.h>
#include<string.h>
int count=0;
char key;
int main(){
    // char s[50]="ammu";
    char s[50];
    printf("Enter a word:\n");
    scanf("%s",s);
    printf("Enter key:\n");
    scanf("%c",&key);
    // printf("%c",s[1]);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='a'){
            count++;
        }
    }
    printf("count:%d\n",count);



    return 0;
}