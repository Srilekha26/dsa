#include<stdio.h>
#include<math.h>
#include<string.h>
int square(int i){
    double j=sqrt(i);
    double k=i/j;
    if(j*k==i)
    return k;
    else
    return 0;
}
int main() {
    char s[100];
  scanf("%s",s);
  int i=strlen(s);
  if(square(i)){
      int k=square(i);
      char a[k][k],r2[k*k],r3[k*k],r4[k*k];
      for(int m=0;m<k;m++){
          for(int n=0;n<k;n++){
              a[m][n]=s[(m*k)+n];
              
          }
      }
  
      for(int m=0;m<k;m++){
          for(int n=0;n<k;n++){
               r2[m+(k*n)]=a[n][m];
              
          }}
         
          for(int m=k-1;m>-1;m--){
          for(int n=k-1;n>-1;n--){
              r3[k*k-1-m*k-n]=a[m][n];
              r4[k*k-1-n*k-m]=a[n][m];
              
          }
      } r2[k*k]='\0';
      r3[k*k]='\0';
      r4[k*k]='\0';
        s[k*k]='\0';
        
          if(!strcmp(r2,s)&&!strcmp(r3,s)&&!strcmp(r4,s)){
              printf("yes\n");
           }
          else
          printf("no\n");
      }
  
  else
  printf("No\n");
      return 0;
      
  }
  

