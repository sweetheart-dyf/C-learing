//���ú�����������������
#include <stdio.h>

int Add(int x,int y)   //����һ������������x��y
{
	int z=0;
	z=x+y;
	return z;
}

int main()
{
	int num1=0;
	int num2=0;
	scanf("%d%d",&num1,&num2);
	int sum=Add(num1,num2);  //���ú���
	printf("%d\n",sum);
	return 0;
}