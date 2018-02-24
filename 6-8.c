#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
void insertbeg(int n,node* head){
    node *m;
    m=(node*)malloc(sizeof(node));
    m->next=head->next;
    head->next=m;
    m->data=n;
}
void swap(node* a,node* b){
    int temp=a->data;
    a->data=b->data;
    b->data=temp;
}
void print(node* giv){
    if(giv->next==NULL){
        printf(" %d",giv->data);
        return ;
    }
    printf(" %d",giv->data);
    giv=giv->next;
    print( giv);
    
}
int main(){
    node* head;
    int c=0,elem=0,i;
    head=(node*)malloc(sizeof(node));
    head->data='\0';
    head->next=NULL;
    while(c!=-1){
        scanf("%d",&c);
        if(c!=-1) insertbeg(c,head);
        elem++;
    }
    node *tem;
    tem=head;
    tem=(node*)malloc(sizeof(node));
    for(i=0;i<=elem/2;i+=2){
        swap(tem,tem->next);
        tem=tem->next;
        tem=tem->next;
    }
    print(head);
    return 0;
}
