#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    for( int i=0;i<n;i++){
        printf("Enter number:\n");
        scanf("%d",&arr[i]);
    }
    
    
    int low=0;
    int high=n-1;
   
    int m,found=0;
    printf("Enter number to be searched:\n");
    scanf("%d",&m);
    while(low<=high){
        int mid=(low+high)/2;
        if(m<arr[mid]){
            high=mid-1;
        }
        else if(m>arr[mid]){
            low=mid+1;
        }
        else if(m==arr[mid]){
            printf("Found at pos %d",mid);
            found=1;
            break;
        }
    }
    if(!found){
            printf("Not found");
        }
   
    return 0;
}