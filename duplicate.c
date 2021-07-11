#include<stdio.h>

    int n;
    // int b[10];
    // static int i=0;
   
int countDistinct(int a[], int n)      //Function Definition
{
   int i, j, count = 1;
   //Traverse the array
   for (i = 1; i < n; i++)      //hold an array element
   {
      for (j = 0; j < i; j++)   
      {
         if (a[i] == a[j])    //Check for duplicate elements
         {
            break;             //If duplicate elements found then break
         }
      }
      if (i == j)
      {
         count++;     //increment the number of distinct elements
      }
   }
   return count;      //Return the number of distinct elements
}
int duplicate(int i,int total,int a[]){
    // int a[7]={1,2,2,3,3,4,5};
    // int b[10];
    
    int count=0;
    int b[total];
    if(i==n){
       printf("\n");
    }
    else{
        if(a[i]!=a[i+1]){
                b[i]=a[i];
            }
            else if(a[i]==a[i+1]){
                
                if(count=0){
                    b[i]=a[i];
                    count++;
                }
                
            }
    }
    printf("%d\n",b[i]);
    // i++;
    duplicate(i+1,total,a);
}
int main(){
   int i, n,c, a[n];
  printf("Enter number of terms:\n");
  scanf("%d", &n);
  for(i=0; i<n; i++)
  {
      printf("Enter number :\n");
      scanf("%d", &a[i]);
  }
  c=countDistinct(a,n);
  duplicate(0,c,a);


    return 0;
}










// #include<stdio.h>
// int main(){
//         int b[5];
//         int count=0;
//         int a[7]={1,2,2,3,3,4,5};
//         for(int i=0;i<7;i++){
//             if(a[i]!=a[i+1]){
//                 b[i]=a[i];
//             }
//             else if(a[i]==a[i+1]){
                
//                 if(count=0){
//                     b[i]=a[i];
//                     count++;
//                 }
                
//             }
//             printf("%d\n",b[i]);
//         }
   


//     return 0;
// }
