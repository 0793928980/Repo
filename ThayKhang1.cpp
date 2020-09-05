#include<stdio.h>


int tongus(int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(n%i==0)
		{
			s+=i;
		}
	}
	return s;
}
int main()
{
	int n, x;

	printf("Nhap n: ");
	scanf("%d",&n);

	int s=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(n%i==0)
		{
			s+=i;
		}
	}
	printf("%ld",s);
	return 0;
	
}

