#include<stdio.h>
int main()
{

	int a[4],t,n,count=0,i=0;
	scanf("%d",&t);
	n=t;
	while(t)
	{
		a[count]=t%10;
		t/=10;
		count++;
	}
	printf("%d\n",count);
	for(i=count-1;i>0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("%d\n",a[0]);
	
	while(n)
	{
		printf("%d",n%10);
		n=n/10;
	 } 
		
	return 0;
}
