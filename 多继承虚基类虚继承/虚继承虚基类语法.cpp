
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//virtual �麯���ؼ���
//��̳���Ҫ��ʡ�ڴ�
//ר��������̳еĻ���������
class A   //�����
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
class B1 :virtual public A //��̳��﷨
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