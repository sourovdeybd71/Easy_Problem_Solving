#include<stdio.h>
#include<math.h>
int main(){
int x=0,y=0,ans=0, n;
scanf("%d",&n);
 
for(int i=1;i<=n;i++){
      if(y==0){
           ans+=i;
       }
       else {
          ans-=i;
       }
       x++;
       if(x==3) {
        y=abs(y-1);
        x=0;
        }
}
printf("%d",ans);
}
