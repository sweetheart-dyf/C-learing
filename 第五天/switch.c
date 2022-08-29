/*
#include <stdio.h>

int main()
{
	int day = 0;  //只能为整型
	scanf("%d",&day);
	switch (day)  //day为整型表达式
	{
		//语句项，从上往下读取，day为多少，即从多少开始循环
		//
	case 1:
		printf("星期一\n");
		break;     //中断循环，跳出某个分支循环
	case 2:
		printf("星期二\n");	
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");	
		break;
	case 5:
		printf("星期五\n");	
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
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
		printf("工作日\n");  //1-5显示工作日
		break;
	case 6:
	case 7:
		printf("休息日\n");  //6，7显示休息日
		break;
	default:     //默认选项。即不匹配上面的选项，顺序只要满足自己的需求即可
		printf("输入错误\n");
		break;
	}
	return 0;
}
*/

//测试

#include <stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)  //进入的时候，n为1
	{
	case 1: m++;  //m=2+1=3
	case 2: n++;  //n=1+1=2
	case 3: 
		switch (n)  //switch 允许嵌套使用
		{
		case 1:   //n=2，跳过这个循环
		n++;
	case 2: m++;n++;  //n进入此处，此时m+1=4.n+1=3
		break;  //跳出switch循环
		}
	case 4:  //进入此循环
		m++;  //m=4+1=5
		break; //跳出case4循环
	default:  //最后默认结果
		break;  //跳出switch (n)循环
	}
	printf("m = %d,n =%d\n",m,n);  //因此m=5，n=3
	return 0;
}
