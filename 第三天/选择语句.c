#include <stdio.h>
int main()
{
	int input=0;            //�����ֵ
	printf("��������:");
	printf("�Ƿ�ú�ѧϰ(1/0)?");
	scanf("%d",&input);
	if (input==1)
	{
		printf("����ҵ����ǵĹ���\n");
	}   //��֧
	else
	{
		printf("����Ҫ��������\n");
	}   //��֧{}���п���
	return 0;
}