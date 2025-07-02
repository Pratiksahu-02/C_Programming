#include<stdio.h>
int fun(int n, int arr[]){
    int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    return 0;
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    fun(n,arr);
    printf("The reversed array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}