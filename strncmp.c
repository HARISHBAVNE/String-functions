#include<stdio.h>
#include<stdbool.h>
bool strncmpX(char* Arr,char* Brr,int No)
{
	int i = 0;
	int k = 0;
	
	while((*Arr !='\0')||(*Brr !='\0'))
	{
		if (i<No)
		{
			if (*Arr != *Brr)
			{
				k = 1;
				break;
			}
			i++;
			Brr++;
			Arr++;
		}
		else
		{
			break;
		}
	}
	if (k == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	/*while(((*Arr !='\0')||(*Brr !='\0'))&&(i<No))
	{
		if (Arr[i] != Brr[i])
			return (Arr[i]-Brr[i]);
		i++;
	}
	return 0;*/
}

int main()
{
	bool bRet = false;
	int No = 0;
	char Arr[30];
	char Brr[30];
	printf("Enter a first string:");
	scanf(" %[^'\n']s",Arr);

	printf("Enter a second string:");
	scanf(" %[^'\n']s",Brr);
	
	printf("Enter a number:");
	scanf("%d",&No);
	bRet = strncmpX(Arr,Brr,No);
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