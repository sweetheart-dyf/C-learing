#include <stdio.h>
int main()
{
	int a=3;
	int b=5;
	int c=a&&b;//�����߶�Ϊ���ʱ��,���Ϊ�棬�����һ��Ϊ0�������Ϊ��
	int d=a||b;//�߼��򣬼�һ��Ϊ���ʱ�򣬽����Ϊ��
	printf("%d\n",c);  //������Ϊ1��

	printf("%d\n",d);

	return 0;
}