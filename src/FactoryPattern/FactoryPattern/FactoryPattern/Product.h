#pragma once
#include "Denpendent.h"

class CCar
{
public:
	CCar(string& name = string(""));
	virtual ~CCar(void);

	virtual void PrintLable() = 0;
protected:
	string name;
};

class CBenzCar:public CCar
{
public:
	CBenzCar(string& name = string(""));
	~CBenzCar();

	void PrintLable();
};

class CBMWCar:public CCar
{
public:
	CBMWCar(string& name = string(""));
	~CBMWCar();

	void PrintLable();
};


class CSportsCar:public CCar
{
public:
	virtual void PrintLable() = 0;
};

class CBenzSportsCar:public CSportsCar
{
public:
	void PrintLable();
};

class CBMWSportsCar:public CSportsCar
{
public:
	void PrintLable();
};

class CBusinessCar:public CCar
{
public:
	virtual void PrintLable() = 0;
};

class CBenzBusinessCar:public CBusinessCar
{
public:
	void PrintLable();
};

class CBMWBusinessCar:public CBusinessCar
{
public:
	void PrintLable();
};