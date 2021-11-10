#include<stdio.h>
void strncatX(const char* src,char* des,int No)
{
	if (No < 0)
	{
		return;
	}
	int i = 0;
	while(*des != '\0')
	{
		des++;
	}
	*des = ' ';
	des++;
	while(*src !='\0')
	{
		if (i<No)
		{
			*des = *src;
		}
		else
		{
			break;
		}
		i++;
		des++;
		src++;
	}
	*des = '\0';
}

int main()
{
	int No = 0;
	char Arr[30];
	char Brr[30];
	printf("Enter a first string:");
	scanf(" %[^'\n']s",Arr);
	printf("Enter a second string:");
	scanf(" %[^'\n']s",Brr);
	
	printf("Enter a nmber:");
	scanf("%d",&No);
	
	strncatX(Arr,Brr,No);
	printf("Concatenated string is:%s\n",Brr);
	return 0;
}