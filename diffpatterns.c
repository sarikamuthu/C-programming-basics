# include<stdio.h>
int main(){
    int no_rows,row,column;
    char ch=65;
    printf("Enter no of rows:");
    scanf("%d",&no_rows);
    // for(row=1;row<=no_rows;row++){
    //     for(column=1;column<=row;column++){
    //         printf("%c ",65);
    //     }
    //     printf("\n");

    // }
// *
// * *
// * * *
// * * * *
// * * * * *
    // for(row=no_rows-1;row>=1;row--){
    //     for(column=1;column<=row;column++){
    //         printf("* ");
    //     }
    //     printf("\n");

    // }
// * * * * * 
// * * * *   
// * * *     
// * *       
// *    
// for(row=1;row<=no_rows;row++){
//         for(column=1;column<=row;column++){
//             printf("%c ",(ch+column));
//         }
//         printf("\n");

//     }
// A
// A B
// A B C
// A B C D
// A B C D E
//     for(row=1;row<=no_rows;row++){
//         for(column=1;column<=row;column++){
//             printf("%c ",ch++);
//         }
//         printf("\n");

//     }
// A 
// B C
// D E F
// G H I J
// K L M N O
    return 0;
}