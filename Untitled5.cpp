#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	
	switch(n)
	{
		case 0:
			{
				printf("0");
				break;
			}
	    case 1:
	    	{
	    		printf("1");
				break;
	    		
			}
		default:
			printf("so");
	}
	return 0;
}
