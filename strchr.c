#include<stdio.h>

char* strchrX(char* Arr,char ch)
{
	while(*Arr != '\0')
	{
		if(*Arr == ch)
		{
			break;
		}
		Arr++;
	}
	if (*Arr == '\0')
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
	Pret = strchrX(Arr,ch);
	printf("character found at index:%d\n",(Pret-Arr));
	return 0;
}