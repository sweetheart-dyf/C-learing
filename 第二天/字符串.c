/*�ַ�����\0��β****************************************************************
#include <stdio.h>
int main()
{
//	printf("hello word\n");   //"hello word\n"��Ϊ�ַ���
//	char arr[]="hello"; //�ַ����ڽ�β������һ��\0���ַ�

	char arr1[]="abc";
	char arr2[]={'a','b','c','\0'};
	printf("%d\n",len);
	printf("%s\n",arr2); 

	
	return 0;
} 
*///*****************************************************************
//���ַ����ĳ���
#include <stdio.h>
#include<string.h>   //���볤�ȵ�ͷ�ļ�
int main()
{

	char arr1[]="abc";
	char arr2[]={'a','b','c',"\0"};  //�ֶ���\0��β

    int len=strlen("abc");
    printf("%d\n",len);   //��ӡ����
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2));
        return 0;
} 
