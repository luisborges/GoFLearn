#include "StdAfx.h"
#include "Template.h"

CTemplate::CTemplate(void)
{
}

CTemplate::~CTemplate(void)
{
}

void CTemplate::DrinkCoffeeInCoffeeStore()
{
	EnterCoffeeStore();
	OrderCoffee();
	DrinkCoffee();
	PayForCoffee();
	KeepChange();
}

void CTemplate::KeepChange()
{

}
//第一种实现
void CFirstTemplate::EnterCoffeeStore()
{
	cout<<"The First Enter Spark."<<endl;
}
void CFirstTemplate::OrderCoffee()
{
	cout<<"Order a cup of Cappuccino."<<endl;
}
void CFirstTemplate::DrinkCoffee()
{
	cout<<"Drink Cappuccino."<<endl;
}
void CFirstTemplate::PayForCoffee()
{
	cout<<"Pay $5 for Cappuccino."<<endl;
}
//第二种实现
void CSecondTemplate::EnterCoffeeStore()
{
	cout<<"The Second Enter Ireland airport coffee store."<<endl;
}
void CSecondTemplate::OrderCoffee()
{
	cout<<"Order a cup of IrelandCoffee."<<endl;
}
void CSecondTemplate::DrinkCoffee()
{
	cout<<"Drink IrelandCoffee."<<endl;
}
void CSecondTemplate::PayForCoffee()
{
	cout<<"Pay $50 for IrelandCoffee."<<endl;
}

void CSecondTemplate::KeepChange()
{
	cout<<"Left $5 for the waiter."<<endl;
}