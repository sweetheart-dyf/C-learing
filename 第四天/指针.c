/*
#include <stdio.h>
int main()
{
	int a = 10; //a在内存中要分配的空间 --4个字节
	printf("%p\n",&a); //用来打印地址  
	int * pa = &a; //pa用来存放地址，在c语言中pa叫指针变量
	//*说明是pa的指针变量
	// int说明pa执行的对象是int类型
	char ch = 'w';
	char * pc = &ch;
	return 0; 
} */

//指针就是地址-
/*
#include <stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;  //用来存放指针
	*pa = 20; //*解引用操作， *pa就是通过pa里边的地址，找到a
	printf("%d\n",a);   //结果为20
	return 0;
} */

#include <stdio.h>
int main()
{
	printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(int*));
	printf("%d\n",sizeof(long*));
	printf("%d\n",sizeof(long long*));
	printf("%d\n",sizeof(float*));
	printf("%d\n",sizeof(double*));
	return 0;
}
//对于32位平台，结果为4
//对于64位平台，结果为8