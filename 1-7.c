#include<stdio.h>
int main(){
long long int n;
int count=0;
scanf("%lld",&n);
while(n/2!=0){
	if(n%2==1)
	count++;
	n=n/2;
}
if(n/2==1||n%2==1)
	count++;
printf("%d\n",count);
return 0;
}
