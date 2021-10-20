//Run-rate
//https://bit.ly/1-52-problem-10

#include<stdio.h>

int main(){
  int i, r1, r2, B, ball_played;
  double current_rr, asking_rr;

  printf("What is the total run opponent scored? \n");
  scanf("%d", &r1);
  printf("Current run? \n");
  scanf("%d", &r2);
  printf("Balls Remain? \n");
  scanf("%d", &B);

  ball_played= 300-B;
  current_rr=(r2*1.0/ball_played)*6;
  asking_rr=((r1-r2+1*1.0)/B)*6;

  printf("Current Run Rate: %0.2lf, Asking Run Rate: %0.2lf", current_rr, asking_rr);

  return 0;
}
