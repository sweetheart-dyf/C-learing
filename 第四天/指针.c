/*
#include <stdio.h>
int main()
{
	int a = 10; //a���ڴ���Ҫ����Ŀռ� --4���ֽ�
	printf("%p\n",&a); //������ӡ��ַ  
	int * pa = &a; //pa������ŵ�ַ����c������pa��ָ�����
	//*˵����pa��ָ�����
	// int˵��paִ�еĶ�����int����
	char ch = 'w';
	char * pc = &ch;
	return 0; 
} */

//ָ����ǵ�ַ-
/*
#include <stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;  //�������ָ��
	*pa = 20; //*�����ò����� *pa����ͨ��pa��ߵĵ�ַ���ҵ�a
	printf("%d\n",a);   //���Ϊ20
	return 0;
} */

#include <stdio.h>
int main()
{
	printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(int*));
	printf("%d\n",sizeof(long*));
	printf("%d\n",sizeof(long long*));
	printf("%d\n",sizeof(float*));
	printf("%d\n",sizeof(double*));
	return 0;
}
//����32λƽ̨�����Ϊ4
//����64λƽ̨�����Ϊ8