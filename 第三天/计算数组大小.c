#include <stdio.h>
int main()
{

//��������Ĵ�С
	int arr[10]={ 0 };
	int sz;

	printf("%d\n",sizeof(arr)); //�������������ܴ�С����λ���ֽڣ�һ��int����Ϊ4�ֽڣ����Դ˴�Ϊ40�ֽ�
	printf("%d\n",sizeof(arr[0]));//���Ϊ4
	sz = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",sz);  //���Ϊ10

	return 0;
}