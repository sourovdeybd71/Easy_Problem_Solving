//print in ascending order
//https://bit.ly/1-52-problem-8

#include<stdio.h>
int main(){
    int n1, n2, n3, temp;
    printf("Input 3 numbers: ");
    for(int i=0; i<3; i++){
      scanf("%d %d %d", &n1, &n2, &n3);
      if(n1>n2){
        temp= n1;
        n1=n2;
        n2=temp;
      }
      if(n2>n3){
        temp= n2;
        n2=n3;
        n3=temp;
      }
      if(n1>n3){
        temp= n1;
        n1=n3;
        n3=temp;
      }
      printf("%d %d %d", n1, n2, n3);
    }
    return 0;
}