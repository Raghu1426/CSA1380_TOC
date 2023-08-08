#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,flag=0,sim=0,a,b;
	char String[100];
	printf("Enter any string : ");
	scanf("%s",&String);
	len=strlen(String);
	for(i=0;i<len;i++)
	{
		if(String[i]!='0' && String[i]!='1')
			flag=1;
	}
	if(flag==1)
	{
		printf("Invalid String");
	}
	else
	{
		printf("Valid String");
		a=0;
		b=len-1;
		while(a<len/2)
		{
			if(String[a]!=String[b])
				sim=1;
			a++;
			b--;
		}
		if(sim!=1)
		{
			if(String[0] == '0' && String[len-1] == '0')
				printf("\nString is Accepted for the given Condition");
			else
				printf("\nString is Not Accepted for the given condition");
		}
	}
}
