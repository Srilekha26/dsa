#include<stdio.h>
#include<math.h>
int main(){
    int n,a,b;
    scanf("%d %d %d",&a,&b,&n);
    int i,j,s,count=0;
    for(j=a;j<=b;j++){
        s=sqrt(j);
         for(i=2;i<=s;i++){
            if(j%i==0){
                if(s*s==j) count++;
                else
                count+=2;
         }}
         count+=2;
         if(count==n) printf("%d",j);
         count=0;
    }
    return 0;
}
