#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char a[100];
	scanf("%[^\n]s", &a);;
	int len = strlen(a);
	int cnt = 0;
	for (int i = 0; i <= len; i++)
	{
		if (a[i]==32)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}

