/*
#include <stdio.h>
#define MAX 1000   //define�������
int main ()
{
	printf("%d\n",.MAX);
	return 0;

}
 */

//define�����
#define ADD(X,Y) ((X)+(Y))
int main()
{
	printf("%d\n",4*ADD(2,3));  //������Ϊ20
	return 0; 
}