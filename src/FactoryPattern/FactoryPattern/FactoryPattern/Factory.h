#pragma once
#include "Product.h"
class CFactory
{
public:
	CFactory(void);
	virtual ~CFactory(void);

	virtual CCar* CreateCar() = 0;

	//virtual CCar* CreateBMW() = 0;
	//virtual CCar* CreateBenz() = 0;
};

class CBenzFactory:public CFactory
{
public:
	CCar* CreateCar();
};

class CBMWFactory:public CFactory
{
public:
	CCar* CreateCar();
};