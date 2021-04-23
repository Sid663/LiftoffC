#include<stdio.h>
void main()
{   int k;
    printf("enter  number of elements");
    scanf("%d", &k);
	printf("Enter Numbers to the Array :\n");
	int n[k];
	int j,i,sum=0;
	for(i = 0;i<k;i++)
	{
		scanf("%d",&n[i]);
	}
	for(j = 0;j<k;j++)
	{
		if(j%2 != 0)
		{
			sum += n[j];
		}
		else
		{
			if(n[j]%2 == 0)
			{
				sum += n[j];
			}
		}
	}
	printf("The Sum is %d",sum);
}
