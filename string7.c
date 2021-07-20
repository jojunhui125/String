int main(void)
{
	char arr[11][21];
	char a;
	int len[10];
	for (int i = 0; i < 10; i++)
	{
		gets(arr[i]);
		len[i] = strlen(arr[i]);
	}

	scanf("%c", &a);

	for (int i = 0; i < 10; i++)
	{
		
		if (arr[i][len[i] - 1] == a)
		{
			printf("%s\n", arr[i]);
		}
	}
	return 0;
}
