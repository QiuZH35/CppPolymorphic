
#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
using namespace std;

//虚函数表，调试，下断点，指针的自动变量
//任何一个类，如果有一个或多个虚函数，内部隐藏一个指针，指针指向虚函数表	

//构造函数不可以是虚函数，如果是虚函数，子类对象中的父类拷贝无法初始化
//继承的本质是子类包含父类对象

//使用多态，析构函数必须为虚函数，否则造成内存泄漏
//构造，父类->子类，构造为虚，父类无法构造
//析构，子类->父类，父类指针，析构为虚，调用子类的析构，自动调用父类的析构
//父类指针，析构不为虚，父类内存可以释放，子类无法释放

class myclass
{
public:
	char *p;
	myclass()
	{
		p = new char[1024 * 1024 * 100];

	}
	virtual ~myclass ()//虚析构
	{
		delete[]p;

	}
	virtual void go()
	{

		cout << "myclass" << endl;
	}

	virtual void go2()
	{

		cout << "myclass" << endl;
	}
};

class classX :public myclass
{
public:
	int *p;
	classX()
	{
		p = new int[1024 * 1024 * 100];

	}
	 ~classX()
	{
		delete[]p;

	}

	void go()
	{
		cout << "classX" << endl;
	}
};
class classY :public myclass
{
	void go()
	{
		cout << "classY" << endl;
	}
};

void main1()
{
	myclass *p = new classX;

	delete p;

	cin.get();
}

void main1()
{
	cout << sizeof(myclass) << endl;//4
	myclass *p;
	p= new classX;
	p->go();


	p = new classY;
	p->go();


	cin.get();
}