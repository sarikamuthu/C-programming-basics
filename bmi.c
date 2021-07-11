# include<stdio.h>
#include <math.h>
int main(){
    float weight,height,BMI;
    printf("Enter weight(in kg):\n");
    scanf("%f",&weight);
    printf("Enter height(in cm):\n");
    scanf("%f",&height);
    BMI=(weight/(pow(height,2)))*10000;
    printf("Your BMI is %f\n",BMI);
    if(BMI<18.5){
        printf("You are underweight");
    }
    else if(18.5<BMI<25){
        printf("You are normal");
    }
    else if(25<BMI<30){
        printf("You are overweight");
    }
    else if(BMI>30){
        printf("You are obese");
    }
    return 0;
}