#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[100];
	int len,cnt=0;
	scanf("%s", a);
	len = strlen(a);

	for (int i = 0; i < len; i++)
	{
		if (a[i] == 'c')
		{
			cnt++;
		}
	}
	if (cnt == 0)
	{
		printf("No ");
	}
	else
	{
		printf("Yes ");
	}
	int count = 0;
	for (int i = 0; i < len-1; i++)
	{
		if (a[i] == 'a' && a[i+1] == 'b')
		{
			count++;
		}
	}
	if (count == 0)
	{
		printf("No ");
	}
	else
	{
		printf("Yes ");
	}
	
	
	return 0;
}


