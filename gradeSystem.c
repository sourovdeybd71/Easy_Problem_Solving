#include<stdio.h>
int main(){
    int a;
    printf("input: ");
    scanf("%d", &a);
    if(a>100){
        printf("Enter a number between 0-100");
    }
    else if(a>=80 ){
        printf("A+");
    }
    
    else if(a>=70){
        printf("A");
    }
    else if(a>=60){
        printf("A-");
    }
    else if(a>=50){
        printf("B");
    }

    else{
        printf("F");
    }
}