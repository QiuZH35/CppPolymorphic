
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
//多态依赖于继承和虚函数

class object
{
public:
	virtual void show()//虚函数,自动选择子类的接口调用
	{
		cout << "object" << endl;
	}

};
class Aobject :public object
{
public:
	virtual void show()
	{
		cout << "Aobject" << endl;
	}
};
class Bobject :public object
{
public:
	virtual void show()
	{
		cout << "Bobject" << endl;

	}
};
class Cobject :public object
{
public:
	virtual void show()
	{
		cout << "Cobject" << endl;

	}
};
int main()
{
	Aobject Aob;
	Bobject Bob;
	object *p = &Aob;
	p->show();
	p = &Bob;
	p->show();
	Cobject Cob;
	p = &Cob;
	p->show();

	//虚函数，提供一个接口
	//存储某个对象地址，调用对应的方法
	//实现软件的可拓展性


	return 0;
}