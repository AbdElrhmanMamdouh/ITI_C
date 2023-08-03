#include <stdio.h>


int main (){
    int arr [10],i,max,min;

    for (i=0;i<10;i++){
        printf ("Enter %d Element : ",i+1);
        scanf ("%d",&arr[i]);
    }

    printf("Array is [ ");
    for (i=0;i<10;i++){
        printf ("%d ",arr[i]);
    }
    printf("] \n");

    max = arr[0];
    for (int i = 1; i <10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf ("maximum num is : %d \n",max);

    min = arr[0];
    for (int i = 1; i <10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf ("minimum num is : %d ",min);

    return 0;
}