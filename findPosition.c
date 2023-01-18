#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        /* code */
        int n, x, z=0;
        scanf("%d",&n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            scanf("%d",&arr[i]);
        }
        scanf("%d",&x);
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==x){
                z= i+1;
                break;
            }
            
        }
        if(z>0){
            printf("Case %d: %d\n",i+1,z);
        }
        else{
            printf("Case %d: Not Found\n",i+1);
        }
        
        
        
        
        
    }
    
}