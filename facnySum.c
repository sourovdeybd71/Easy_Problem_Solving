#include<stdio.h>

int summation(int arr[], int n){
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        if(i%2==0 && arr[i]%2==0){
            sum=sum+i+arr[i];
        }
        if(i%2!=0 && arr[i]%2!=0){
            sum=sum+i+arr[i];
        }
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    int sum = summation(arr, n);
    
    printf("%d",sum);
}