#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max;
    for (int i = 0; i < n; i++){
        if (i == 0){
            max = arr[i];
        }
        else if (arr[i] > max){
            max = arr[i];
        }
    }
    printf("The largest element in the array is: %d\n", max);
}