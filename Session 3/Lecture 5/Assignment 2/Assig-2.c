#include <stdio.h>

void print (int arr[10]);
void scan (int arr[10]);
int pass (int arr[10]);
int fail (int arr[10]);
int max (int arr[10]);
int min (int arr[10]);
int sum (int arr[10]);

int passN =0;
int failN =0;
int maxN =0 ;
int minN =100 ;

int main (){
    int avr;
    int class1 [10],class2 [10],class3 [10];
    printf("For Class 1 : \n"); scan(class1); 
    printf("For Class 2 : \n"); scan(class2); 
    printf("For Class 3 : \n"); scan(class3);
    printf("Class 1 Grades: "); print (class1);
    printf("Class 2 Grades: "); print (class2);
    printf("Class 3 Grades: "); print (class3);

    pass(class1);pass(class2);pass(class3);
    printf("No. of Pass Students= %d \n",passN);

    fail(class1);fail(class2);fail(class3);
    printf("No. of Fail Students= %d \n",failN);

    max(class1);max(class2);max(class3);
    printf("Highest Grade = %d \n",maxN);

    min(class1);min(class2);min(class3);
    printf("Lowest Grade = %d \n",minN);

    avr=(sum(class1)+sum(class2)+sum(class3))/30;
    printf("Average Grades = %d \n",avr);

    return 0;
}

void scan (int arr[10]){

    int i=0;
    for (i=0;i<10;i++){
        printf ("Enter student %d Grade : ",i+1);
        scanf ("%d",&arr[i]);
    }

}

void print (int arr[10]){
    int i=0;
    printf(" [ ");
    for (i=0;i<10;i++){
        printf ("%d ",arr[i]);
    }
    printf("] \n");
}

int pass (int arr[10]){
    for (int i = 0; i <10; i++) {
        if (arr[i] > 50) {
            passN++;
        }
    }
    return passN;
}

int fail (int arr[10]){
    for (int i = 0; i <10; i++) {
        if (arr[i] < 50) {
            failN++;
        }
    }
    return failN;

}

int max (int arr[10]){
    for (int i = 0; i <10; i++) {
        if (arr[i] > maxN) {
            maxN = arr[i];
        }
    }
    return maxN;
}

int min (int arr[10]){
    for (int i = 0; i <10; i++) {
        if (arr[i] < minN) {
            minN = arr[i];
        }
    }
    return minN;
}

int sum (int arr[10]){
    int sum =0 ;
    for (int i = 0; i <10; i++) {
        sum += arr[i];
    }
    return sum;
}
