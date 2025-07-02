#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int *p1 = arr;
    int *p2 = arr + 4;
    int temp;
    while(p1 < p2){
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}