#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[100];
	scanf("%[^\n]s", &a);
	int cnt = 1;
	printf("%d. ", cnt);
	int len = strlen(a);


	for (int i = 0; i < len; i++)
	{
		printf("%c", a[i]);
		if (a[i] == 32)
		{
			cnt++;
			printf("\n%d. ", cnt);
		}
		


	}
	return 0;
}
