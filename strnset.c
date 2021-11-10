#include<stdio.h>

void strnsetX(char* Arr,char ch,int No)
{
	int i = 0;
	while(*Arr !='\0')
	{
		if (i<No)
		{
			*Arr = ch;
			Arr ++;
		}
		else
		{
			break;
		}
		i++;
	}
}

int main()
{
	int No = 0;
	char Arr[30];
	char Brr[30];
	char ch = '\0';
	printf("Enter a string:");
	scanf(" %[^'\n']s",Arr);
	
	printf("Enter a character that you want to replace:");
	scanf(" %c",&ch);
	
	printf("Enter a number:");
	scanf("%d",&No);

	printf("string is:%s\n",Arr);
	strnsetX(Arr,ch,No);
	printf("Modified string is:%s\n",Arr);
	return 0;
}