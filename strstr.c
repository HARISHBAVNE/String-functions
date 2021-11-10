#include<stdio.h>

char* strstrX(char* Arr,char* Brr)
{
	int k = 0;
	while(*Arr != '\0')					// Loop for Main string traversal
	{
		int i = 0,j = 0;
		while(*Brr != '\0')				// Loop for sub string traversal
		{
			if (Brr[i]!='\0')			// Check whther substring index character '\0' or not
			{
				if (Brr[i]!=Arr[j])
				{
					break;
				}
				
				i++;
				j++;
			}
			else
			{
				break;
			}
		}
		if (Brr[i]=='\0')
		{
			k = 1;
			break;
		}
		Arr++;
	}
	if (k == 1)
	{
		return Arr;
	}
	else
	{
		return NULL;
	}
}

int main()
{
	char ch = '\0';
	char Arr[30];
	char Brr[30];
	char* Pret;
	printf("Enter a string:");
	scanf(" %[^'\n']s",Arr);
	
	printf("Enter a substring:");
	scanf(" %[^'\n']s",Brr);
	
	Pret = strstrX(Arr,Brr);
	if (Pret != NULL)
	{
		printf("Word found at index:%d\n",(Pret-Arr));		// pointer arithmatics.
	}
	else
	{
		printf("Not found");
	}
	return 0;
}