#include <stdio.h>
 void merge(int *a,int fi,int mid,int la,int* b,int k){
            int i=(fi-1)*k,j=(mid-1)*k,d=(fi-1)*k;
            while(i<(mid-1)*k&&j<la*k-1){ 
                if(a[i]<a[j]) 
                  b[d++]=a[i++]; 
                else  
                  b[d++]=a[j++];
            }
            
            while(i<(mid-1)*k)
            b[d++]=a[i++];
            while(j<(la*k)) 
                b[d++]=a[j++];
            
 }
 void mergesort(int* a,int fi,int la,int* b,int k){
        int mid=(fi+la)/2;
        if(mid!=fi){
            
            mergesort(a,fi,mid-1,b,k);
            mergesort(a,mid,la,b,k);
        }
        merge(a,fi,mid,la,b,k);
     }

int main() {
    int k,n;
    scanf("%d %d",&n,&k);
    int l[k*n],b[k*n],i,j;
    for(i=0;i<n*k;i++){
        scanf("%d",&l[i]);
        b[i]=0;
    }
    int fi,la;
    fi=1;la=n;
  mergesort(l,fi,la,b,k);
   for(i=0;i<n*k;i++) printf("%d  ",b[i]);
   return 0;
        
    }
