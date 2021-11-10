#include<stdio.h>
#include<stdbool.h>
bool strcmpX(char* Arr,char* Brr)
{
	while((*Arr !='\0')&&(*Brr !='\0'))
	{
		if (*Arr != *Brr)
		{
			break;
		}
		Arr++;
		Brr++;
	}
	if ((*Arr == '\0')&&(*Brr =='\0'))
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int main()
{
	bool bRet = false;
	char Arr[30];
	char Brr[30];
	printf("Enter a first string:");
	scanf(" %[^'\n']s",Arr);
	printf("Enter a second string:");
	scanf(" %[^'\n']s",Brr);
	
	bRet = strcmpX(Arr,Brr);
	if(bRet == true)
	{
		printf("Strings are equal");
	}
	else
	{
		printf("Strings are not equal");
	}
	return 0;
}