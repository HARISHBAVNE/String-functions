#include<stdio.h>

void strsetX(char* Arr,char ch)
{
	while(*Arr !='\0')
	{
		*Arr = ch;
		Arr ++;
	}
}

int main()
{
	int iRet = 0;
	char Arr[30];
	char Brr[30];
	char ch = '\0';
	printf("Enter a string:");
	scanf(" %[^'\n']s",Arr);
	
	printf("Enter a character that you want to replace:");
	fflush(stdin);
	scanf("%c",&ch);
	printf("string is:%s\n",Arr);
	strsetX(Arr,ch);
	printf("Modified string is:%s\n",Arr);
	return 0;
}