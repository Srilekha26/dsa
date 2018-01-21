#include<stdio.h>
#include<string.h>
 typedef struct str{
    char a;
    int j;
}str;
int main()
{
    char st[30];
    int k,l,ele;
    scanf("%s",st);
    int i=strlen(st);
    str count[i];
    for(k=0;k<i;k++){
        count[k].a='(';
        count[k].j=-1;
    }
    for(k=0;k<i;k++){
        for(l=0;l<i;l++){
            if(st[k]!=count[l].a){
               ele++;
            }
            else{
                count[l].j++;
                
            }}
            if(ele==i){
                 count[k].a=st[k];
                count[k].j=1;
            }
            ele=0;
        }
    
    for(l=0;l<i;l++){
        if(count[l].j !=-1){
            printf("count[%d]  %c %d\n",l,count[l].a,count[l].j);
        }
    }
    return 0;
}
