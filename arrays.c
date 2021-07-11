#include<stdio.h>
int main(){
    int a[10][10];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
printf("%d",a[1][2]);
    return 0;
}