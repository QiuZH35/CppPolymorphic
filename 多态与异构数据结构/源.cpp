
#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
using namespace std;

//�麯�������ԣ��¶ϵ㣬ָ����Զ�����
//�κ�һ���࣬�����һ�������麯�����ڲ�����һ��ָ�룬ָ��ָ���麯����	

//���캯�����������麯����������麯������������еĸ��࿽���޷���ʼ��
//�̳еı�������������������

//ʹ�ö�̬��������������Ϊ�麯������������ڴ�й©
//���죬����->���࣬����Ϊ�飬�����޷�����
//����������->���࣬����ָ�룬����Ϊ�飬����������������Զ����ø��������
//����ָ�룬������Ϊ�飬�����ڴ�����ͷţ������޷��ͷ�

class myclass
{
public:
	char *p;
	myclass()
	{
		p = new char[1024 * 1024 * 100];

	}
	virtual ~myclass ()//������
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