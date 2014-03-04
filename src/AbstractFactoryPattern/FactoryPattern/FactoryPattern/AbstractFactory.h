#pragma once
#include "Product.h"
class CAbstractFactory
{
public:
	CAbstractFactory(void);
	~CAbstractFactory(void);

	virtual CCar* CreateBenzCar() = 0;
	virtual CCar* CreateBMWCar() = 0;
};

class CSportsCarFactory:public CAbstractFactory
{
public:
	CCar* CreateBenzCar();
	CCar* CreateBMWCar();
};

class CBuinessCarFactory:public CAbstractFactory
{
public:
	CCar* CreateBenzCar();
	CCar* CreateBMWCar();
};
