#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("enter your choice:");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1:
			{
				printf("food item:Pizza\nPrice:Rs 239");
				break;
			}
	    case 2:
	    	{
	    		printf("food item:Burger\nPrice:Rs 129");
				break;
	    		
			}
		case 3:
	    	{
	    		printf("food item:Pasta\nPrice:Rs 179");
				break;
	    		
			}
		case 4:
	    	{
	    		printf("food item:French fries\nPrice:Rs 99");
				break;
	    		
			}
		case 5:
	    	{
	    		printf("food item:Sandwitch\nPrice:Rs 149");
				break;
	    		
			}
		default:
			printf("other choices are not available");					
	}
	return 0;
}
