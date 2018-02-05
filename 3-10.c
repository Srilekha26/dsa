#include<stdio.h>
int main(){
    int n,i,j,key,index,swap[3];
    scanf("%d",&n);
    int a[n],in[n],se[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        in[i]=se[i]=a[i];
    }
    //bubble sort:highest bubbled to last
    int change=1,temp;
    swap[0]=0;
    j=n;
    while(change!=0){
        change=0;
        for(i=0;i<j-1&&j>1;i++){
            if(a[i]>a[i+1]){
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
                change=1;
                swap[0]++;
            }}
            j--;
        }
        printf(" buble %d\n",swap[0]);
        
        //insertion sort:element inserted at its right position
     swap[1]=0;
     for(i=0;i<n;i++){
         key=in[i];
         j=i-1;
         while(key<in[j]&&j>-1){
             in[j+1]=in[j];
             swap[1]++;
             j--;
        }
        in[j+1]=key;
     } printf(" inser:%d\n",swap[1]);
        
        //selection sort:puts min element of unsorted into sorted
    swap[2]=0;
    j=0;
    while(j<n){
        key=se[j];
        index=j;
         for(i=j;i<n;i++){
        if(se[i]<key){
            key=se[i];
            index=i;
        } }
        se[index]=se[j];
        se[j]=key;
        swap[2]++;
        j++;
     }
     printf(" selec:%d\n",swap[2]);
        
        if(swap[0]<swap[1]){
            if(swap[0]<=swap[2]){
                printf("bubble sort");
            }
            else
            printf("selection sort");
        }else if(swap[0]=swap[1]&&swap[0]<swap[2]){
            printf("bubble sort");
        } else{
            if(swap[1]<=swap[2]){
            printf("insertion sort");}
            else printf("selection sort");
            
        }
           
        return 0;
        
    
}
