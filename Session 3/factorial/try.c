#include <stdio.h>
int main (){
    int x,fac=1;
    printf("Enter Number : ");
    scanf("%d",&x);
    if (x<0)
    printf("Undefined");
    else if (x==0){
        fac = 1;
        printf ("Factorial = %d",fac);
    }
    else{
        do{
            fac *= x--;
        }
        while (x>0);
        printf ("Factorial = %d",fac);
    }
}