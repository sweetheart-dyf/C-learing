# include <stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("����������:");
	scanf("%s",password);
	printf("��ȷ������(Y/N):");
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}