#include<stdio.h>

void strncpyX(char Arr[],char Brr[],int No)
{
	whule((No>0)&&(*Arr !='\0'))
	{
		*Brr = *Arr;
		No--;
		Arr++;
		Brr++;
		
	}
	*Brr = '\0';
}
int main()
{
	char Arr[20];
	char Brr[20];
	int No = 0;
	printf("Enter a string:");
	scanf(" %[^'\n']s",Arr);
	
	printf("Enter a number:");
	scanf("%d",&No);
	
	strncpyX(Arr,Brr,No);
	printf("Copied string: %s\n",Brr);
	return 0;
}