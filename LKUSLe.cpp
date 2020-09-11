#include<stdio.h>
//liet ke uoc so le
void lkusle(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		int t=n%i;
		if(t==0)
		{
			if(i%2!=0)
			{
				printf("%d ",i);
			}
		}
	}
}

int main(){
	int n;
	printf("Nhap N: ");
	scanf("%d",&n);
	lkusle(n);
	
	
}
