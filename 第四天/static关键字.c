/*   static���ξֲ�����
#include <stdio.h>
void test()
{
	// int a = 1;  //a�Ǿֲ�����������ʱ�������뿪ʱ���٣�ÿ�ν��붼�����´���,���Ϊ10��2
	static int a = 1   //���Ϊ2-11�������static�󣬽���ʱ�����������뿪ʱ����������
	a++;
	printf("%d",a);
}

int main()
{
	int i = 0;
	while (i<10)
	{
		test();
		i++;
	}
	return 0;
}
*/



/*
//static����ȫ�ֱ���
extern int g_val; //�����ⲿ����
#include <stdio.h>
int main()
{
	printf("%d\n",g_val);
	return 0;
}

  */


#include <stdio.h>
extern int Add(int x, int y);   //��������
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a,b)
	printf("sum = %d\n",sum);
	retuen 0;
}