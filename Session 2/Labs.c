#include <stdio.h>

int main ()
{
    int grade; 
    printf (" Enter Ur Grade : ");
    scanf ("%d",&grade);
    switch (grade) {
        // range 1 to 6
    case 0 ... 55:
        printf("Pass");
        break;
        // range 19 to 20
    case 56 ... 75:
        printf("good");
        break;
    case 76 ... 85:
        printf("Very good");
        break;
    case 86 ... 100:
        printf("Excellent");
        break;
    default:
        printf("Wrong");
        break;
    }
    return 0 ;
}