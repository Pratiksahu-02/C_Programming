#include <stdio.h>
 void perfectnum(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if (n%i==0){
            sum=sum+i;
        }
    }
    if (sum==n){
        printf("%d is a perfect number",sum);
    }
    else{
        printf("%d is not a prefect number",sum);
    }

 }

void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    perfectnum(n);
}