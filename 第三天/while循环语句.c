
#include <stdio.h>
int main()

{
	int line=0; //����һ��line����
	while(line<3000)
	{
	printf("ѧϰд����:%d\n",line);  //%d��ʾ�к�
		line++; //��ӡһ�Σ���һ��line����ֵ
	}
	if (line==3000) //��ʾline����3000ʱ������ѭ��
	{
	printf("������ҵ�һ�ݺõĹ���\n");
	}
	return 0;
}