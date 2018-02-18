#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    char* s[n];
    for(i=0;i<n;i++){
        s[i]=(char*)malloc(sizeof(char));
        scanf("%s",s[i]);
    }int leng[n],sum[n],one[n];
    for(i=0;i<n;i++){
       leng[i]=strlen(s[i]);
    }
    for(j=0;j<n;j++){
        sum[j]=0;
        one[j]=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<leng[i];j++){
            sum[i]+=*(s[i]+j);
        }
     
    }
    for(i=0;i<n;i++){
        for(j=0;j<32;j++){
            k=sum[i]%2;
            if(k==1) 
            one[i]++;
            sum[i]/=2;
            k=0;
        }
    }
    for(j=0;j<32;j++){
        for(i=0;i<n;i++){
            if(one[i]==j){
                printf("%s ",s[i]);
            }
        }
    }
    return 0;
}
