/*
#include <stdio.h>

int main()
{
	int day = 0;  //ֻ��Ϊ����
	scanf("%d",&day);
	switch (day)  //dayΪ���ͱ��ʽ
	{
		//�����������¶�ȡ��dayΪ���٣����Ӷ��ٿ�ʼѭ��
		//
	case 1:
		printf("����һ\n");
		break;     //�ж�ѭ��������ĳ����֧ѭ��
	case 2:
		printf("���ڶ�\n");	
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");	
		break;
	case 5:
		printf("������\n");	
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	}
	return 0;
}

*/

/* 
#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d",&day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");  //1-5��ʾ������
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");  //6��7��ʾ��Ϣ��
		break;
	default:     //Ĭ��ѡ�����ƥ�������ѡ�˳��ֻҪ�����Լ������󼴿�
		printf("�������\n");
		break;
	}
	return 0;
}
*/

//����

#include <stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)  //�����ʱ��nΪ1
	{
	case 1: m++;  //m=2+1=3
	case 2: n++;  //n=1+1=2
	case 3: 
		switch (n)  //switch ����Ƕ��ʹ��
		{
		case 1:   //n=2���������ѭ��
		n++;
	case 2: m++;n++;  //n����˴�����ʱm+1=4.n+1=3
		break;  //����switchѭ��
		}
	case 4:  //�����ѭ��
		m++;  //m=4+1=5
		break; //����case4ѭ��
	default:  //���Ĭ�Ͻ��
		break;  //����switch (n)ѭ��
	}
	printf("m = %d,n =%d\n",m,n);  //���m=5��n=3
	return 0;
}
