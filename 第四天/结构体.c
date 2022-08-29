#include <stdio.h> 

struct Stu  //创建一个学生
{	
	char name[20];
	int age;
	double score;
};
/*
struct Book   //创建一个书的类型
{
	char  name[20];  //成员变量
	float price;
	char id[30];
};  */
int main()
{
	struct Stu s={"张三",20,85.5};  // 结构体的创建和初始化
	printf("1: %s %d %lf\n",s.name,s.age,s.score);  //结构体变量，成员变量，lf打印双精度浮点数

	struct Stu * ps = &s;  //存储变量
	printf("2: %s %d %lf\n",(*ps).name,(*ps).age,(*ps).score);  //解引用变量，使用变量进行引用

	printf("3: %s %d %lf\n",ps->name,ps->age,ps->score);  //使用变量，利用->操作符进行引用,左边为结构体指针->成员变量名

	return 0;
}