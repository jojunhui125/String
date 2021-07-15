#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char a[100];
	scanf("%s", &a);
	int len = strlen(a);
	for (int i = 0; i < len; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
		if (65 <= a[i] && a[i] <= 90) 
		{
			printf("%c", a[i]);
		}
	}
	return 0;
}

