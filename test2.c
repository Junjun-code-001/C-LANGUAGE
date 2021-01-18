#include<stdio.h>
int main()
{
	{int a = 10;
	printf("a=%d\n", a);//ok

	}
	printf("a=%d\n", a);//erro
	return 0;
}
//局部变量的生命周期；从进入作用域生命开始，离开作用域生命结束。
//全局变量的生命周期；整个程序的生命周期。



//int main()
//{
//	//计算两个数的和。
//	int num1 = 0;//定义变量num1为0
//	int num2 = 0;
//	int sum = 0;
//	//c语言语法。变量的定义要放在语块的最前面。
//	scanf_s("%d%d", &num1, &num2);//scanf 输出函数 &是取地址符号，把数据存入变量中去。
//	程序运行后需要手动输入变量值。
//	sum= num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}



//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a); 变量的作用域
//	return 0;
//}
//发生错误“a”: 未声明的标识符,可已看出局部变量的作用域已经不起作用了。

//int a = 100;
//
//int main()
//{
//	int a = 20;
//	printf("%d\n", a);
//	return 0;
//}
//	//局部变量和全局变量的名字尽量不要一样，容易混淆。
//	//局部变量和全局变量同时出现时，局部变量优先。
//
//	//short age = 20;
//	//float weight = 95.2;
//	//printf("%d\n", sizeof(long double));
//	//会出现从float到double类型的截断的警告，原因是计算机认为95.2是双精度数据，此时标明95.2的数据类型即可95.2f。
//	
//return 0;
//
//}