// This program compares two arrays and print true if all elements are same in both arrays
#include <stdio.h>
#include<stdbool.h>
int compArr (int arr1[], int arr2[]);
int main() {
    int arr1[]={1,2,4,3,6};
    int arr2[]={4,5,1,3,2};
    printf("array is %d\n",compArr(arr1, arr2));
    return 0;
}

int compArr (int arr1[], int arr2[]){
        for (int i=0; i<5; ++i){
        for (int j=i+1; j<5; ++j){
            if (arr1[i]>arr1[j]){
                int a= arr1[i];
                arr1[i]=arr1[j];
                arr1[j]= a;
            }
        }
    }
        for (int i=0; i<5; ++i){
        for (int j=i+1; j<5; ++j){
            if (arr2[i]>arr2[j]){
                int a= arr2[i];
                arr2[i]=arr2[j];
                arr2[j]= a;
            }
        }
    }
    for (int i=0;i<5; ++i){
        printf("%d\n", arr1[i]);
    }
     for (int i=0;i<5; ++i){
        printf("%d\n", arr2[i]);
    }
            int status=0;

    for (int i=0; i<5; ++i){
        if (arr1[i]==arr2[i]){
          status=1;  
        }
        else
        status=0;
    }
    return status;
}

    for (int i=0; i<5; ++i){
        if (arr1[i]==arr2[i]){
          status=1;  
        }
        else
        status=0;
    }
    return status;
}

