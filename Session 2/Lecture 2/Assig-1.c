#include <stdio.h>

int main (){
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,val;
    printf ("Enter Number 1 : ");
    scanf ("%d",&num1);
    printf ("Enter Number 2 : ");
    scanf ("%d",&num2);
    printf ("Enter Number 3 : ");
    scanf ("%d",&num3);
    printf ("Enter Number 4 : ");
    scanf ("%d",&num4);
    printf ("Enter Number 5 : ");
    scanf ("%d",&num5);
    printf ("Enter Number 6 : ");
    scanf ("%d",&num6);
    printf ("Enter Number 7 : ");
    scanf ("%d",&num7);
    printf ("Enter Number 8 : ");
    scanf ("%d",&num8);
    printf ("Enter Number 9 : ");
    scanf ("%d",&num9);
    printf ("Enter Number 10 : ");
    scanf ("%d",&num10);
    printf ("Enter The Value to search : ");
    scanf ("%d",&val);

    if (val == num1)
    printf("Value is Exists at Element Num1");
    else if (val == num2)
    printf("Value is Exists at Element Num2");
    else if (val == num3)
    printf("Value is Exists at Element Num3");
    else if (val == num4)
    printf("Value is Exists at Element Num4");
    else if (val == num5)
    printf("Value is Exists at Element Num5");
    else if (val == num6)
    printf("Value is Exists at Element Num6");
    else if (val == num7)
    printf("Value is Exists at Element Num7");
    else if (val == num8)
    printf("Value is Exists at Element Num8");
    else if (val == num9)
    printf("Value is Exists at Element Num9");
    else if (val == num10)
    printf("Value is Exists at Element Num10");
    else
    printf("Value is not Exists");

    return 0 ;
}