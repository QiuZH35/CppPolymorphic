
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>

using namespace std;

//�麯�����أ��뷵��ֵ�޹أ������ͣ�������˳���йأ���Ҫ�����麯���ļ̳�
//�麯���Ѿ����̳��ˣ������麯����
//���Ҫʹ�ñ��̳е��麯��������������麯�����أ�ԭ����C++��������ʶ��
//��̬���Կ��࣬үү����ָ�룬���Դ洢�ﱲ�ĵ�ַ��

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