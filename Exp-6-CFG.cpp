#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,a,b,flag=0,sim=0;
	char input[100];
	printf("Enter any String : ");
	scanf("%s",&input);
	len=strlen(input);
	for(i=0;i<len;i++)
	{
		if(input[i]!='0'&&input[i]!='1')
			flag=1;
	}
	if(flag==1)
		printf("Invalid String");
	else
	{
		printf("Valid String");
		if(len%2!=0)
			printf("\nLength should be even (no.of 0's equals to no.of 1's)");
		else
		{
			a=0;
			b=len-1;
			while(a<len/2)
			{
				if(input[a]!='0' || input[b]!='1')
					sim=1;
				a++;
				b--;
			}
			if(sim==0)
				printf("\nString is Accepted for given condition");
			else
				printf("\nString is Not Accepted for given condition");
		}
	}
	return 0;
}
