#include <stdio.h>

int main()
{
	//δ�����ı�ʶ��
	extern int g_val;
	printf("g_val=%d\n", g_val);
	return 0;
}
/*int global = 2020;//ȫ�ֱ��������������ж�������
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
	//���������������
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;//����Ҫ�����ڴ�������ǰ��
	//scanf_s("%d%d", &num1, &num2);//&ȡ��ַ����
	//sum = num1 + num2;
	//printf("sum=%d\n", sum);
	//return 0;

//}