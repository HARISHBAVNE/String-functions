#include<stdio.h>

void struprX(char* Arr)
{
	while(*Arr !='\0')
	{
		if ((*Arr >='a')||(*Arr <= 'z'))
		{
			*Arr = *Arr -('a'-'A');
		}
		Arr ++;
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
	struprX(Arr);
	printf("Modified string is:%s\n",Arr);
	return 0;
}