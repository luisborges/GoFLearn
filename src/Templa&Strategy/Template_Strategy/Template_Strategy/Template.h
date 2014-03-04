#pragma once

class CTemplate
{
public:
	CTemplate(void);
	virtual ~CTemplate(void);

	void DrinkCoffeeInCoffeeStore();
protected:
	virtual void EnterCoffeeStore()=0;
	virtual void OrderCoffee()=0;
	virtual void DrinkCoffee()=0;
	virtual void PayForCoffee()=0;
	virtual void KeepChange();//hook方法
};

class CFirstTemplate:public CTemplate
{
protected:
	void EnterCoffeeStore();
	void OrderCoffee();
	void DrinkCoffee();
	void PayForCoffee();
};

class CSecondTemplate:public CTemplate
{
protected:
	void EnterCoffeeStore();
	void OrderCoffee();
	void DrinkCoffee();
	void PayForCoffee();
public:
	void KeepChange();//hook方法
};
