#include<stdio.h>
int main(){
    int n,time=1,i;
    scanf("%d",&n);
    int join[n],leave[n],a[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&join[i],&leave[i]);
    }
    for(i=0;i<n;i++){
        if(time<join[i]||time>leave[i]){
            a[i]=0;
        }
        else{
            a[i]=time;
            time++;
        }
    } for(i=0;i<n;i++){
        printf("%d ",a[i]);    
    }
return 0;}
