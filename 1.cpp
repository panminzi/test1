#include<stdio.h>
int main()
{
	int N,k=0,t,q,sum=0;
	scanf("%d",&N);
	t=N;
	do{
    	q=t%10;
    	t=t/10;
		k++;
		sum+=q;
	}while(t!=0);
	printf("%d %d",k,sum);
	return 0;
	
}
