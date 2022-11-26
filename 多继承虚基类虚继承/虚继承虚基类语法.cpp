
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//virtual 虚函数关键字
//虚继承主要节省内存
//专门用于虚继承的基类叫虚基类
class A   //虚基类
{
public:
	int a;
	A()
	{
		cout << "A()" << endl;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
};
class B1 :virtual public A //虚继承语法
{

};
class B2 :virtual public A
{

};

class C :public B1, public B2
{

};

int main1()
{
	C c1;
	cin.get();
	return 0;
}