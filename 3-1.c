#include<stdio.h>
#include<stdlib.h>
int main() {
   int t,i;
   scanf("%d",&t);
   for(i=0;i<t;i++){
       int n,height,sum=0,index,key,j,k;
       scanf("%d",&n);
       int h[n],c[n];
       for(j=0;j<n;j++){
           scanf("%d",&h[j]);
       }
       scanf("%d",&c[0]);
       key=c[0];
       index=0;
       for(j=1;j<n;j++){
           scanf("%d",&c[j]);
           if(c[j]>key){
               key=c[j];
               index=j;
           }}
            height=h[index];
            for(k=0;k<n;k++){
                sum+=abs(height-h[k])*c[k];
                
            }
            printf("%d",sum);
            
        }
        return 0;
   }
