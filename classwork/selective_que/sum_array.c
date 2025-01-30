#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of the array is: %d\n", sum);
}