/*   while循环与break、continue循环中断
#include <stdio.h>
int main()
{
	int i = 1;
	while(i <= 10) //表达式为真的时候则执行循环，0为假，非0为真
	{
		if (i == 5)
			continue; //在while的循环中，continue的作用是跳过本次循环
					//直接去判断部分，看是否进行下一次的循环

	
	//	if (i ==5)
	//		break;  //添加后结果为1-4，在while循环中，break用于永久的终止循环
		
	printf("%d ",i);
		i++;
	}
	return 0;
}
*/

//getchar,标准输入（键盘）
//使用ctrl+z 读取结束

//EOF  ---end of file --文件的结束标志，读取错误的时候输出
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)  //条件不相等时为真
	{
		putchar(ch);  //输出一个字符到屏幕上
	}
	return 0;
}