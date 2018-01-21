#include<stdio.h>
#include<string.h>
int stcmp(char *sm,char *s,int i,int k){
    char a[i];
    for(int l=0;l<i;l++){
        a[l]=s[k+l];
    }
   if(!strcmp(sm,a))
    return 1;
    else return 0;
}
int main(){
    char sm[20];
    char s[100];
    scanf("%s ",sm);
    int g=0;
    scanf("%c",&s[g]);
    while(s[g]!='\n'){
        g++;
        scanf("%c",&s[g]);
    }
    int i=strlen(sm),j=strlen(s),k,count=0;
    for(k=0;k<j;k++){
        if(k==0)
        count+=stcmp(sm,s,i,0);
       else if(s[k-1]==' '&& (k+i)<j&&s[k+i]==' ')
        count+=stcmp(sm,s,i,k);
    }
    printf("%d\n",count);
    return 0;
}
