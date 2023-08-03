#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;
    float root1,root2,imaginary,d;

    printf("enter values of quadratic equation: ");
    scanf("%f%f%f",&a,&b,&c);

    d = (b*b) - (4*a*c);      

    switch(d>0)
    {
        case 1:
            root1 = (-b + sqrt(d)) / (2*a);
            root2 = (-b - sqrt(d)) / (2*a);
            printf("roots are %f and %f",root1,root2);    
            break;
        case 0:
            if (d==0){
                root1 = root2 = -b / (2*a);
                printf("roots are %f and %f",root1,root2);  
                break;
            }else{
                root1 = root2 = -b / (2*a);
                imaginary = sqrt(-d) / (2*a);
                printf("roots are %f + i%f and %f - i%f",root1,imaginary,root2,imaginary);   
                break;
            }
    }
    return 0;
}