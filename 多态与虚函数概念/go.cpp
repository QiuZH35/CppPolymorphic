
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
//��̬�����ڼ̳к��麯��

class object
{
public:
	virtual void show()//�麯��,�Զ�ѡ������Ľӿڵ���
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

	//�麯�����ṩһ���ӿ�
	//�洢ĳ�������ַ�����ö�Ӧ�ķ���
	//ʵ������Ŀ���չ��


	return 0;
}