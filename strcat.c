#include<stdio.h>

void strcatX(const char* src,char* des)
{
	if (src == NULL)
	{
		return;
	}
	while(*des != '\0')
	{
		des ++;
	}
	*des =' ';
	des ++;
	while(*src != '\0')
	{
		*des = *src;
		des++;
		src++;
	}
	*des = '\0';
}

int main()
{
	int iRet = 0;
	char Arr[30];
	char Brr[30];
	printf("Enter a first string:");
	scanf(" %[^'\n']s",Arr);
	printf("Enter a second string:");
	scanf(" %[^'\n']s",Brr);
	
	strcatX(Arr,Brr);
	printf("Concatenated string is:%s\n",Brr);
	return 0;
}