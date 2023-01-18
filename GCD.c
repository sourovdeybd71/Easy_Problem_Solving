#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        /* code */
        int n, count=0;
        scanf("%d",&n);
        int arr[n];
        
        for (int i = 0; i < n; i++)
        {
            /* code */
            scanf("%d",&arr[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            /* code */
            for (int j = 1; j <= n; j++)
            {
                /* code */ 
                if(i!=j){
                    while (arr[i]!=arr[j])
                    {
                        /* code */
                        if(arr[i]>arr[j])
                            arr[i] -= arr[j];
                        else
                            arr[j] -= arr[i];
                    }
                    if (arr[i]==1)
                    {
                        count++;
                    }
                     
                }
            }
            
        }
        printf("%d\n",count);
    }
}