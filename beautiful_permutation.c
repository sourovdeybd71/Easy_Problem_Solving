#include <stdio.h>

int main(void) {
  int n;
  
  scanf("%d", &n);
  if (n<=3)
  {
    /* code */
    printf("NO SOLUTION");
  }
  
else{
  for (int i = 1; i <= n; i=i+2)
  {
    /* code */
    printf("%d ",i);

  }
for (int i = 2; i <= n; i=i+2)
  {
    /* code */
    printf("%d ",i);

  }
  }

  return 0;
}
