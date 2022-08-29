/*   if 的多分支
#include <stdio.h>
int main()
{
	int age = 50;
	if (age < 18)
		printf("少年\n");
	else if (age >= 18 && age < 26)
		printf("青年\n");
	else if (age >= 26 && age < 40)
		printf("中年\n");
	else if (age >= 40 && age < 60)
		printf("壮年\n");
	else 
		printf("老年\n");
	return 0;
}
*/
	/* if双分支
	if(age>=18)     //if，esle是双分支结构
		printf("成年\n");
	else
	{
		printf("未成年\n");  
		//对于需要有多句内容输出，需要用{}包括起来，即属于else的分支
	}

		return 0;
}
*/

#include <stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b ==2)
		{
			printf("haha\n");
		}
			else
			{
				printf("hehe\n");
			}
	}
		return 0;
	//没有任何输出
}