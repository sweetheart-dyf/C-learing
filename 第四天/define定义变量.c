/*
#include <stdio.h>
#define MAX 1000   //define定义符号
int main ()
{
	printf("%d\n",.MAX);
	return 0;

}
 */

//define定义宏
#define ADD(X,Y) ((X)+(Y))
int main()
{
	printf("%d\n",4*ADD(2,3));  //计算结果为20
	return 0; 
}