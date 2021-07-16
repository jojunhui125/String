#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[100];
	scanf("%s", &arr);
	int n;
	

	int len = strlen(arr);
	while (len != 1)
	{

		scanf("%d", &n);
		if (n >= len)
		{
			for (int i = 0; i < len - 1; i++)
			{
				printf("%c", arr[i]);
			}
			printf("\n");
			arr[len - 1] = NULL;
			len--;
			break;
		}

		for (int i = 0; i < len; i++)
		{
			if (i + 1 == n)
			{
				continue;
			}
			printf("%c", arr[i]);
		}

		for (int i = n - 1; i < len - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[len - 1] = NULL;
		printf("\n");
		len--;

	}
}
