#include <stdio.h>

int main (){
    int x,y,z;
    int *p,*q,*r ,*temp;
    x=40;
    y=20;
    z=30;
    p=&x;
    q=&y;
    r=&z;

    printf("Value of x : %d \nValue of y : %d \nValue of z : %d \n",x,y,z);

    printf("Value of p : %p \nValue of q : %p \nValue of r : %p \n",p,q,r);

    printf("Value of *p : %d \nValue of *q : %d \nValue of *r : %d \n",*p,*q,*r);

    printf("Swapping pointers \n");
    temp = r;
    r=p;
    p=q;
    q=temp;

    printf("Value of x : %d \nValue of y : %d \nValue of z : %d \n",x,y,z);

    printf("Value of p : %p \nValue of q : %p \nValue of r : %p \n",p,q,r);

    printf("Value of *p : %d \nValue of *q : %d \nValue of *r : %d \n",*p,*q,*r);

    return 0;
}