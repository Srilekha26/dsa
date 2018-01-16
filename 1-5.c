#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	long long int k=pow(2,n);
	long long int l=k%(long long int)pow(10,10);
	printf("%lld",l);
	return 0;
}
