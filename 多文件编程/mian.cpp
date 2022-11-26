
#define _CRT_SECURE_NO_WARNINGS 

#include "Aclass.h"
#include "Bclass.h"
#include <iostream>
using namespace std;

//#pragma once必须注意，否则死锁互相包含
//include最深层是1024
//构造函数不可以互相包含，会造成死锁,栈溢出
//头文件互相包含，互相引用对象，指针，引用，可以搬移不可以执行

void test()
{
	//Aclass a;
	//Bclass b;//释放的时候从下往上
	
	Aclass a;
	Bclass b;
	
	//b.show(a);
	a.show(b);
}
int main()
{
	test();

	return 0;
}