/* �ж�һ�����Ƿ�Ϊ����
#include <stdio.h>
int main()
{

	int num = 16;
	if (num%2 == 1)  //%��ʾȡģ�����Ƿ�Ϊ1
		printf("����\n");
	else
		printf("��������\n");
	return 0;
}
*/

//���1-100֮�������
#include <stdio.h>
int main()
{
	/*
	int i = 0;
	for (i = 1; i<=100; i++)  //����forѭ��
	{
		if (i %2 == 1)
	
	}	*/
	int i = 1;
	for (i = 1; i <= 100; i+=2) //i��1��ʼ��ÿ�μ�2��Ϊ����
	//for (int i = 1;i <= 100; i+=2)
	{
			printf("%d ",i); 
	}
	return 0;
}
