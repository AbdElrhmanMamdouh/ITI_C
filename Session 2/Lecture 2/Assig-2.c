#include <stdio.h>

int main (){

    int id = 1234 , userId;
    int pass = 12345 , userPass;
    printf ("Please Enter ur ID : ");
    scanf ("%d",&userId);

    if (userId == id){
        printf ("Please Enter ur Password : ");
        scanf ("%d",&userPass);
        if (userPass == pass)
        printf("Ay User Name");
        else
        printf("Incorrect Password");
    }else
    printf("Incorrect ID");

    return 0; 
}