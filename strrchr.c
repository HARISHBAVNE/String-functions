#include<stdio.h>

char* strrchrX(char* Arr,char ch)
{
	int i = 0;
	while(*Arr != '\0')
	{
		i++;
		Arr++;
	}
	Arr--;
	while(i>0)
	{
		if(*Arr == ch)
		{
			break;
		}
		i--;
		Arr++;
	}
	if (i == 0)
	{
		return NULL;
	}
	else
	{
		return Arr;
	}
}

int main()
{
	char ch = '\0';
	char Arr[30];
	char* Pret;
	printf("Enter a string:");
	scanf(" %[^'\n']s",Arr);
	
	printf("Enter a character:");
	scanf(" %c",&ch);
	Pret = strrchrX(Arr,ch);
	printf("character found at index:%d\n",(Pret-Arr));
	return 0;
}