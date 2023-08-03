# include <stdio.h>

int max (int a , int b , int c, int d);
int min (int a , int b , int c, int d);

int main (){
    int num1,num2,num3,num4;

    printf ("Enter 1st Number : ");
    scanf ("%d",&num1);
    printf ("Enter 2nd Number : ");
    scanf ("%d",&num2);
    printf ("Enter 3rd Number : ");
    scanf ("%d",&num3);
    printf ("Enter 4th Number : ");
    scanf ("%d",&num4);

    printf("The Maximum Num is : %d \n",max(num1,num2,num3,num4));
    printf("The Minimum Num is : %d",min(num1,num2,num3,num4));

    return 0;
}
int max (int a , int b , int c, int d){
    int m = 0;
    m=((a>b) && (a>c) && (a>d))? a : ((b>c) && (b>d))? b : (c>d) ? c : d;
    return m;
}
int min (int a , int b , int c, int d){
    int m = 0;
    m=((a<b) && (a<c) && (a<d))? a : ((b<c) && (b<d))? b : (c<d) ? c : d;
    return m;
}