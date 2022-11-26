#pragma once
#include <iostream>
#include "Bclass.h"

using namespace std;

class Aclass
{
public:
	Aclass();
	~Aclass();
	 void show(Bclass *b)
	{
		cout << "class Aclass void show(Bclass b) " << endl;
	}
};

