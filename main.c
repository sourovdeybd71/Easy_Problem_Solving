
//http://bit.ly1-52-problem-1
//Odd Or Even

#include<stdio.h>
int main(){
int num, n;

printf("How many number you wanna input: ");
scanf("%d ",&num);

for(int i=0; i<num; i++){ //Or while(num){}
  scanf("%d",&n);
  if(n%2==0){
    printf(" %d is EVEN", n);
  }
  else{
    printf("%d is ODD", n);
  }

}
return 0;
}



