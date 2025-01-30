#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The array in reverse order is: ");
    for (int i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
}