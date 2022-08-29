/*   static修饰局部变量
#include <stdio.h>
void test()
{
	// int a = 1;  //a是局部变量，进入时创建，离开时销毁，每次进入都会重新创建,结果为10个2
	static int a = 1   //结果为2-11，添加了static后，进入时创建变量，离开时变量不销毁
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
//static修饰全局变量
extern int g_val; //声明外部变量
#include <stdio.h>
int main()
{
	printf("%d\n",g_val);
	return 0;
}

  */


#include <stdio.h>
extern int Add(int x, int y);   //声明函数
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a,b)
	printf("sum = %d\n",sum);
	retuen 0;
}