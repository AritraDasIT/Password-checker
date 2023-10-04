#include<stdio.h>
int main()
{
	char str[10];
	char str2[10];
	int i=0; 
	int flag=1; 
	
	printf("Enter the new  password: ");
	scanf("%s",str);
	
	printf("Enter the  password:");
	scanf("%s",str2);
	
	while(str[i]!='\0')
	{
		if(str[i]!=str2[i])
		{
			flag=0;
			
			break;
			
		}
		i++;
		
	}
	
	if(flag==1)
	{
		printf("You successfully logged in");
	}
	else
	{
		printf("Failed, please try again");
	}

	
	
	
	
}

