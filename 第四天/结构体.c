#include <stdio.h> 

struct Stu  //����һ��ѧ��
{	
	char name[20];
	int age;
	double score;
};
/*
struct Book   //����һ���������
{
	char  name[20];  //��Ա����
	float price;
	char id[30];
};  */
int main()
{
	struct Stu s={"����",20,85.5};  // �ṹ��Ĵ����ͳ�ʼ��
	printf("1: %s %d %lf\n",s.name,s.age,s.score);  //�ṹ���������Ա������lf��ӡ˫���ȸ�����

	struct Stu * ps = &s;  //�洢����
	printf("2: %s %d %lf\n",(*ps).name,(*ps).age,(*ps).score);  //�����ñ�����ʹ�ñ�����������

	printf("3: %s %d %lf\n",ps->name,ps->age,ps->score);  //ʹ�ñ���������->��������������,���Ϊ�ṹ��ָ��->��Ա������

	return 0;
}