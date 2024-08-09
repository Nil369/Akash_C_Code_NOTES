#include <stdio.h>

int returnMax(int array[], int n){
    int max = array[0];
    for (int i = 1; i < n; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

int returnMin(int array[], int n){
    int max = array[0];
    for (int i = 1; i < n; i++){
        if(array[i] < max){
            max = array[i];
        }
    }
    return max;
}

int main(){
    int arr[10];

    for (int i = 0; i < 10; i++){
        printf("Enter the number at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    int max = returnMax(arr, 10);
    int min = returnMin(arr, 10);
    printf("The largest number is: %d\n", max);
    printf("The samllest number is: %d\n", min);

    return 0;
}
