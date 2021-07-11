#include<stdio.h>
// int n;
int duplicates(int n,int a[n]){
     int i=0;
     int j=i+1;
    int flag=0;
    if(i==n){
        return 0;
    }
    else{
    if(a[i]=a[j]){
        flag=1;
    }
    else if(flag == 0)
        {
        printf("%d\n",a[i]);
        ++i;
    ++j;
    duplicates(n,a);
        }
        flag = 0;
    }
    
}
int main(){
    int i, n,a[n];
  printf("Enter number of terms:\n");
  scanf("%d", &n);
  for(i=0; i<n; i++)
  {
      printf("Enter number :\n");
      scanf("%d", &a[i]);
  }
  duplicates(n,a);
  return 0;
}
