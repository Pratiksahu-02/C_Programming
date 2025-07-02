//Given are two one dimensional arrays A and B which are in ascending order. 
//Write a program to marge them into a single sorted array C that contain every items from arrays A and B.

#include <stdio.h>
int main(){
    int arr1[4] = {1, 3, 5, 7};
    int arr2[4] = {2, 4, 6, 8};
    int arr3[8];
    int i, j, k;
    i = j = k = 0;
    while(i < 4 && j < 4){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i < 4){
        arr3[k++] = arr1[i++];
    }
    while(j < 4){
        arr3[k++] = arr2[j++];
    }
    for(i = 0; i < 8; i++){
        printf("%d ", arr3[i]);
    }
}