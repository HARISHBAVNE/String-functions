#include<stdio.h>

void strlwrX(char* Arr)
{
	while(*Arr!='\0')
	{
		if((*Arr >='A')&&(*Arr <='Z'))
		{
			*Arr = *Arr +32;
		}
		Arr++;
	}
}

int main()
{
	int iRet = 0;
	char Arr[30];
	char Brr[30];
	printf("Enter a string:");
	scanf(" %[^'\n']s",Arr);
	printf("string is:%s\n",Arr);
	strlwrX(Arr);
	printf("Modified string is:%s\n",Arr);
	return 0;
}