//counting numbers
//https://bit.ly/1-52-problem-7

#include<stdio.h>
#include<stdlib.h>

int main()
{
  char line[]= "1 -2 1000 -50 20 7 445";
  char *p, *e;
  long input;
  int count=0;
  p=line;

  for(p=line; ;p=e){
    input = strtol(p, &e, 10);
    if(p==e){
      break;
    }
    count++;

  }
  printf("%d ", count);
  return 0;
}