#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,t[n],d[n],ti,j,waittime,min,avg=0,index;
    for(i=0;i<n;i++){
        scanf("%d %d",&t[i],&d[i]);
    }
    for(i=0;i<n;i++){
        if(t[i]==0){
            ti=d[i];
            avg+=d[i];
            t[i]=-1;
        }
    }
    for(i=0;i<n-1;i++){
        min=59999;
        for(j=0;j<n;j++){
            if(t[j]!=-1){
            waittime=ti-t[j]+d[j];
            if(waittime<min){
                min=waittime;
                index=j;
            }
        }}
        printf("%d num %d\n",min,index);
        avg+=min;
        ti+=d[index];
        t[index]=-1;
    }
    printf("%d ",avg/n);
    return 0;
}
