#include <stdio.h>


int add (int x,int y);
int sub (int x,int y);
int mul (int x,int y);
int div (int x,int y);
int aand (int x,int y);
int oor (int x,int y);
int xoor (int x,int y);
int rem (int x,int y);
int inc (int x);
int dec (int x);
int noot (int x);

int main (){

    int id,num1,num2;

    printf ("Please Enter Operation ID : ");
    scanf("%d",&id);
    if ((id==7) || (id==10) || (id==11)){
        printf ("Please Enter The number : ");
        scanf("%d",&num1);
        switch (id)
        {
        case 7:
            printf ("result = %d",noot(num1));
            break;
        case 10:
            printf ("result = %d",inc(num1));
            break;
        case 11:
            printf ("result = %d",dec(num1));
            break;    
        default:
            printf ("Wrong Operation");
            break;
        }
    }else{

        printf ("Please Enter 1st number : ");
        scanf("%d",&num1);
        printf ("Please Enter 2nd number : ");
        scanf("%d",&num2);

        switch (id)
        {
        case 1:
            printf ("result = %d",add(num1,num2));
            break;
        case 2:
            printf ("result = %d",sub(num1,num2));
            break;
        case 3:
            printf ("result = %d",mul(num1,num2));
            break;
        case 4:
            printf ("result = %d",div(num1,num2));
            break;
        case 5:
            printf ("result = %d",aand(num1,num2));
            break;
        case 6:
            printf ("result = %d",oor(num1,num2));
            break;
        case 8:
            printf ("result = %d",xoor(num1,num2));
            break;
        case 9:
            printf ("result = %d",rem(num1,num2));
            break;
        default:
            printf ("Wrong Operation");
            break;
        }
    }
    return 0;
}

int add (int x,int y){
    return x+y;
}
int sub (int x,int y){
    return x-y;
}
int mul (int x,int y){
    return x*y;
}
int div (int x,int y){
    return x/y;
}
int aand (int x,int y){
    return x&y;
}
int oor (int x,int y){
    return x|y;
}
int xoor (int x,int y){
    return x^y;
}
int rem (int x,int y){
    return x%y;
}
int inc (int x){
    return ++x;
}
int dec (int x){
    return --x;
}
int noot (int x){
    return !x;
}