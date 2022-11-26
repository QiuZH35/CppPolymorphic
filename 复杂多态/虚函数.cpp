
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>

using namespace std;

//虚函数重载，与返回值无关，与类型，参数，顺序有关，不要发生虚函数的继承
//虚函数已经被继承了，还是虚函数。
//如果要使用被继承的虚函数，不允许出现虚函数重载，原因是C++编译器不识别
//多态可以跨类，爷爷辈的指针，可以存储孙辈的地址。

class myclass
{
public:
	virtual void go1()
	{
		cout << "myclass" << endl;
	}
	virtual void go(int a)
	{

	}
	virtual void go(int a, int b)
	{

	}
	

};

class myclassX :public myclass
{
public:
	virtual void go(int a, int b, int c)
	{

	}
	void test()
	{
		go1();
	}
};

class myclassY :public myclassX
{
public:
	virtual void go1()
	{
		cout << "myclassXXXXXXXX" << endl;
	}
};
void main()
{
	myclassX *p = new myclassY;
	//myclass *p = new myclassY;
	p->go1();


	cin.get();
}