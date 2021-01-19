#include<stdio.h>
//*****************************************常量的学习**************************************

//****************************************字面常量****************************************
   //例如 数字 3 ；字面上常量，直接写出来的常量


//**************************************** const修饰常量*************************************
//int main()
//{  
//	//const - 常属性在使用之后，变量num的值不允许再修改，具有常属性,本质上还是变量，叫做常变量。
//	  const int num = 4;
//	  printf("%d/n", num);
//	  num = 6;//发生错误，左值指定 const 对象
//	  printf("%d/n", num);//num是const修饰的常变量
//	//3;//字面常量，直接写出来的常量。
//
//	return 0;
//}
//*****************************************#define定义的标识符常量****************************
//
//#define MAX  10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}


//*****************************************枚举常量******************************************
//enum Sex
//{
//	male,
//	female,//这些列出来的叫做枚举常量，他们是有值的，并且是不可以修改的
//	secret, 
//};
//int main()
//{
//	printf("%d\n", male);//0
//	printf("%d\n", female);//1
//	printf("%d\n", secret);//2
//	return 0;
//}

//****************************************字符串******************************************

//字符串类型:如“hello bit\0”有双引号引起来的一串字符称为字符串字面值，简称字符串
//字符串的结束标志是一个\0的转义字符，占用一个字节的内存，其值为0.
//如"abcdefg"
//如何存储字符串？
//int main()
//{
//	char arr1[] = "abc";//将字符串存入数组。
//	char arr2[] = { 'a','b','c' };//将字符存入数组
//	char arr3[] = { 'a','b','c','\0' };
//	printf("%s\n", arr1);//输出abc
//	printf("%s\n", arr2);//输出abc烫烫烫
//	printf("%s\n", arr3);//输出abc
//	return 0;
//}//问题出在哪？
////"abc"相当于‘a’‘b’‘c’‘\0’, 其中\0是字符串的结束标志。
////{'a''b''c'}是字符，没有\0，所以在结尾没有结束而是出现了乱码。 
//#include<string.h>// 调用strlen函数的函数声明
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));//输出3，\0不算做长度
//	printf("%d\n", strlen(arr2));//输出15，随机值不确定
//	return 0;
//}

//*************************************转义字符**********************************
//转变原来的意思
//转义字符非常的多
int  main()
{
	printf("abc\n")//\n也是一种转义字符 换行
	return 0;
}