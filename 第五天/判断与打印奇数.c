/* 判断一个数是否为奇数
#include <stdio.h>
int main()
{

	int num = 16;
	if (num%2 == 1)  //%表示取模，余是否为1
		printf("奇数\n");
	else
		printf("不是奇数\n");
	return 0;
}
*/

//输出1-100之间的奇数
#include <stdio.h>
int main()
{
	/*
	int i = 0;
	for (i = 1; i<=100; i++)  //利用for循环
	{
		if (i %2 == 1)
	
	}	*/
	int i = 1;
	for (i = 1; i <= 100; i+=2) //i从1开始，每次加2，为奇数
	//for (int i = 1;i <= 100; i+=2)
	{
			printf("%d ",i); 
	}
	return 0;
}
