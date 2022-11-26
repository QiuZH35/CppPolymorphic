#pragma once
#include <iostream>
#include "Aclass.h"

using namespace std;

class Bclass
{
public:
	Bclass();
	~Bclass();
	 void show(Aclass a)
	{
		cout << "class Bclass void show(Aclass a) " << endl;
	}
};

