#include<stdio.h>
#include<conio.h>

int main()
{
	int flag,n,a[20],i,s;
	printf("\nEnter the size of array:");
	scanf("%d",&n);
	printf("\nEnter array elelemts:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter value to search:");
	scanf("%d",&s);
	//i=1;
	flag=1;
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			flag=0;
		//printf("\nValue found...");
		}
	}
	if(flag==0)
		printf("\nValue found....");
	else
		printf("\nValue not found....");
}
