#include<stdio.h>
int main(){
    int n, i;
    float sum = 0.0, avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; ++i){
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("Average = %.2f\n", avg);
    return 0;
}