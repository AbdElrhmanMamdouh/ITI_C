#include <stdio.h>
int x=10;
int main (){
    int sum (int x ,int y);
    void print (void);
    printf("%d \n",sum(5,6));
    print();
    printf("%d",x);

    return 0; 
}
int sum (int x ,int y){
    return x+y;
}
void print (void){
    x=5;
    printf("ynfa3");
}

