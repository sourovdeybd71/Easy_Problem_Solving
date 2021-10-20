//Full-circle number
//https://bit.ly/1-52-problem-9

#include<stdio.h>
#include<math.h>
int main(){
  int num, sqr_root;

  printf("Input: ");
  scanf("%d", &num);

  sqr_root=sqrt(num);
  if(sqr_root*sqr_root==num){
    printf("It's an Full-circle Number");
  }
  else{
    printf("No");
  }
}
