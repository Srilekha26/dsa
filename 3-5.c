#include<stdio.h>

int main() {
  int intr,inde;
  scanf("%d %d",&intr,&inde);
  int i,j,l[intr],u[intr],key;
  for(i=0;i<intr;i++){
      scanf("%d",&l[i]);
  }
   for(i=0;i<intr;i++){
      scanf("%d",&u[i]);
  }
  key=l[0];
  i=0;j=0;
  while(j<inde){
      if(key<u[i])  key++;
      else if (key>=u[i]){
       if(key>l[i+1]&&key<u[i+1]){
          key++;i++;
      } else if(key>l[i+1]&&key>u[i+1]) i++;
        else if(key<l[i+1]){
            key=l[i+1];
            i++;
        }}
        j++;
  }
  printf("%d",key);
  return 0;
}
        
        
  
