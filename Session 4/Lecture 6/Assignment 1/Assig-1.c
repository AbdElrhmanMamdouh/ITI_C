#include <stdio.h>
#define arrN 10

void sort (int *ptr);

int main (){

    // scan array 
    int arr [arrN], i;
    for (i=0 ; i<arrN ; i++){
        printf ("Enter Element %d in Array : ", i+1);
        scanf ("%d",&arr[i]);
    }

    // print array before sorting
    printf("Array before sorting [ ");
    for (i=0;i<arrN;i++){
        printf ("%d ",arr[i]);
    }
    printf("] \n");

    sort(arr);

        // print array after sorting
    printf("Array after sorting [ ");
    for (i=0;i<arrN;i++){
        printf ("%d ",arr[i]);
    }
    printf("] \n");

    return 0;
}

void sort (int *ptr){
    int i , j ,temp;
    for (i=0; i<arrN-1 ; i++){
        for (j=0; j<arrN-1-i ;j++){
            if (ptr[j+1]<ptr[j]){
                temp = ptr[j+1];
                ptr[j+1]=ptr[j];
                ptr[j]=temp;
            }
        }
    }

}
