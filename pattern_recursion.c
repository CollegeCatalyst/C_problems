#include <stdio.h>

void printpattern(int n);
int main(){
    int a;
    printf("Enter the number of star line:\n");
    scanf("%d",&a);
    printpattern(a);
    return 0;
}


void printpattern(int n){
    if (n==1){
        printf("*\n");
        return;
    }

    else{
        printpattern(n-1);
        for (int i = 0; i < (2*n-1); i++)
        {
            // printf(" ");
            printf("*");    
        }
        printf("\n");
        // printpattern(n-1);// the position of this line depends the order of decreasing or increasing print of star (*)
        
        
    }
}