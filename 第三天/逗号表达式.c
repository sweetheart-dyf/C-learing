#include <stdio.h>
int main()
{
		int a=0;
		int b=3;
		int c=5;
		int d=(a=b+2,c=a-4,b=c+2);
		//���ű��ʽ���Ǵ����������μ���ģ��������ʽ�Ľ�������һ�����ʽ�Ľ��
		printf("%d\n",d);  //���Ϊ3
		return 0;
}