#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[100] = { 0 };
	scanf("%[^\n]s", &a);
	int cnt = 1,len,i;
	len = strlen(a);

	for ( i = 0; i < len-1; i++)
	{
		
		if (a[i] == 32)
		{
			if (cnt % 2 == 0)
			{
				printf("\n");
			}
			cnt++;
			continue;
		}
		if (cnt % 2 == 1)
		{
			printf("%c", a[i]);
		}
			
	}
		
	
	return 0;
}
