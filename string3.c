#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char arr[100];
	scanf("%s", &arr);
	int len = strlen(arr);
	for (int i = 0; i < len; i++)
	{
		if ((arr[i] >= 97 && arr[i] <= 122) || (arr[i] >= 48 && arr[i] <= 57))
		{
			printf("%c", arr[i]);
		}
		if (arr[i] >= 65 && arr[i] <= 90)
		{
			printf("%c", arr[i] + 32);
		}
	}
	
	
	return 0;
}

