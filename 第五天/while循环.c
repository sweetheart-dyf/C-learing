/*   whileѭ����break��continueѭ���ж�
#include <stdio.h>
int main()
{
	int i = 1;
	while(i <= 10) //���ʽΪ���ʱ����ִ��ѭ����0Ϊ�٣���0Ϊ��
	{
		if (i == 5)
			continue; //��while��ѭ���У�continue����������������ѭ��
					//ֱ��ȥ�жϲ��֣����Ƿ������һ�ε�ѭ��

	
	//	if (i ==5)
	//		break;  //��Ӻ���Ϊ1-4����whileѭ���У�break�������õ���ֹѭ��
		
	printf("%d ",i);
		i++;
	}
	return 0;
}
*/

//getchar,��׼���루���̣�
//ʹ��ctrl+z ��ȡ����

//EOF  ---end of file --�ļ��Ľ�����־����ȡ�����ʱ�����
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)  //���������ʱΪ��
	{
		putchar(ch);  //���һ���ַ�����Ļ��
	}
	return 0;
}