#include<stdio.h>

void consecutiveEven(int t){
    int n;
    for (int i = 0; i < t; i++)
    {
        /* code */
        scanf("%d",&n);
        int x = (n-12)/4;
        printf("%d %d %d %d\n",x, x+2, x+4, x+6);
    }

}

int main(){
    int t;
    scanf("%d",&t);
    consecutiveEven(t);
}