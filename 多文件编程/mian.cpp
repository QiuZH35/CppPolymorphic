
#define _CRT_SECURE_NO_WARNINGS 

#include "Aclass.h"
#include "Bclass.h"
#include <iostream>
using namespace std;

//#pragma once����ע�⣬���������������
//include�������1024
//���캯�������Ի�����������������,ջ���
//ͷ�ļ�����������������ö���ָ�룬���ã����԰��Ʋ�����ִ��

void test()
{
	//Aclass a;
	//Bclass b;//�ͷŵ�ʱ���������
	
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