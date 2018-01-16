
#include<stdio.h>
#include<math.h>
int main(){
	int c,b,p;
	scanf("%d %d %d",&c,&b,&p);
	int l=(int)pow(c,b)%p;
	printf("%d",l);
	return 0;
}
