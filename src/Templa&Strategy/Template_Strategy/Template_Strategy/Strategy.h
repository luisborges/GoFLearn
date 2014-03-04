#pragma once

class CStrategy;
class CContext
{
public:
	void setStrategy(CStrategy* strategy);
	void OrderCoffee();
private:
	CStrategy* strategy;
};
class CStrategy
{
public:
	CStrategy(void);
	virtual ~CStrategy(void);
	virtual void OrderCoffee()=0;
};

class COneStrategy:public CStrategy
{
public:
	void OrderCoffee();
};

class CTwoStrategy:public CStrategy
{
public:
	void OrderCoffee();
};

