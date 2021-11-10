#include<stdio.h>

void strcpyX(char* src,char* des)
{
	if (src == NULL)
	{
		return;
	}
	while(*src != '\0')
	{
		*des = *src;
		src++;
		des++;
	}
	*des = '\0';
}

int main()
{
	int iRet = 0;
	char Arr[30];
	char Brr[30];
	printf("Enter a string:");
	scanf("%[^'\n']s",Arr);
	
	strcpyX(Arr,Brr);
	printf("Copied string is:%s\n",Brr);
	return 0;
}