#include<stdio.h>

void strrevX(char* Arr)
{
	char* start = Arr;
	char* end = Arr;
	char temp;
	while(*end != '\0')
	{
		end ++;
	}
	end--;
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
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
	strrevX(Arr);
	printf("Reverse string is:%s\n",Arr);
	return 0;
}