#include <stdio.h>

float average(float a, float b, float c);

int main(){
    // float a=2,b=4,c=5;
    int a,b,c;
    printf("Enter the value of num1:\n");
    scanf("%d",&a);
    printf("Enter the value of num2:\n");
    scanf("%d",&b);
    printf("Enter the value of num3:\n");
    scanf("%d",&c);

    printf("The average of %d,%d,%d is %f",a,b,c,average(a,b,c));
    return 0;
}

float average(float a, float b, float c){
    float averageVal=(a+b+c)/3;
    return averageVal;
}