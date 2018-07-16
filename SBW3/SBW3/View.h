#pragma once
#include "Controller.h"
class View
{
private:
	int select;
	Controller c;
	int trangthaidangnhap;
public:
	View();
	void Menu();
	~View();
};

