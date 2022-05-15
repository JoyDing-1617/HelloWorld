#include <stdio.h>

int main()
{
	//未声明的标识符
	extern int g_val;
	printf("g_val=%d\n", g_val);
	return 0;
}
/*int global = 2020;//全局变量在整个工程中都可以用
void test()
{
	printf("test()---%d\n", global);
}
int main()
{
	test();
	printf("%d\n", global);
	return 0;
}*/
//int main()
//{
	//计算两个数的相加
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;//变量要定义在代码块的最前面
	//scanf_s("%d%d", &num1, &num2);//&取地址符号
	//sum = num1 + num2;
	//printf("sum=%d\n", sum);
	//return 0;

//}