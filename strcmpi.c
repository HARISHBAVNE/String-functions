#include<stdio.h>
#include<stdbool.h>
bool strcmpiX(char* Arr,char* Brr)
{
	// int i = 0;
	while((*Arr !='\0')||(*Brr !='\0'))
	{
		if ((*Arr != *Brr)&&(*Arr-*Brr != 32)&&(*Arr-*Brr != -32))
		{
			i = 1;
			break;
		}
		Arr++;
		Brr++;
	}
	// if(i == 0)
	// {
		// return true;
	// }
	// else
	// {
		// return false;
	// }
	if ((*Arr == '\0')||(*Brr == '\0'))
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
	
	bRet = strcmpiX(Arr,Brr);
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