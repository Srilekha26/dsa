#include<stdio.h>
int main(){
    int count=1;
    long long int a;
    scanf("%lld",&a);
    long long int n=a;
    while(n/10!=0){
        count++;
        n=n/10;
    }
   
    int check=a%10,i,b[count-1],add=0;
    a=a/10;
     
      for( i=count-2;i>-1;i--){
        b[i]=a%10;
         
        
        a=a/10;
    }
      for(i=count-2;i>-1;i=i-2){
        
          b[i]=b[i]*2;
       if(b[i]>9){
            b[i]=b[i]/10+b[i]%10;
        }
       
       
    }
       for( i=0;i<count-1;i++){
        add+=b[i];}
    
    if((add+check)%10==0){
        printf("valid");
    }
    else
    printf("invalid");
    return 0;
    
    
}
