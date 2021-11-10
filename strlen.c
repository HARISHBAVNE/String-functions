#include<stdio.h>

int strlenX(char arr[])
{
	int icnt = 0;
	if (arr == NULL)
	{
		return 0;
	}
	while(*arr != '\0')
	{
		icnt++;
		arr++;
	}
	return icnt;
}


int main()
{
	int iRet = 0;
	char Arr[30];
	printf("Enter a string:");
	scanf("%[^'\n']s",Arr);
	
	iRet = strlenX(Arr);
	printf("Length of string is:%d\n",iRet);
	return 0;
}