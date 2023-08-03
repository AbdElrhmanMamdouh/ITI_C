#include <stdio.h>
#include <string.h>

int main (){
 int arr [0];
    int id,i,pass;
    printf ("Please Enter Ur ID : ");
    scanf ("%d",&id);
    switch (id)
    {
    case 1234 :
        printf ("Please Enter Ur Password : ");
        scanf ("%d",&pass);
        if (pass == 7788){
            printf("Welcome Ahmed");
            break;
        }
        else {
            for(i=0;i<2;i++){
                printf ("Try Again : ");
                scanf ("%d",&pass);
                if (pass == 7788){
                    printf("Welcome Ahmed");
                    break;
                }
        }
        if (i==2)
        printf("No more tries");
        }
        break;
    case 5678 :
        printf ("Please Enter Ur Password : ");
        scanf ("%d",&pass);
        if (pass == 5566){
            printf("Welcome Amr");
            break;
        }
        else {
            for(i=0;i<2;i++){
                printf ("Try Again : ");
                scanf ("%d",&pass);
                if (pass == 5566){
                    printf("Welcome Amr");
                    break;
                }
        }
        if (i==2)
        printf("No more tries");
        }
        break;
    case 9870 :
        printf ("Please Enter Ur Password : ");
        scanf ("%d",&pass);
        if (pass == 1122){
            printf("Welcome Wael");
            break;
        }
        else {
            for(i=0;i<2;i++){
                printf ("Try Again : ");
                scanf ("%d",&pass);
                if (pass == 1122){
                    printf("Welcome Wael");
                    break;
                }
        }
        if (i==2)
        printf("No more tries");
        }
        break;
    
    default:
        printf("You are not registered");
        break;
    }
    return 0;
}