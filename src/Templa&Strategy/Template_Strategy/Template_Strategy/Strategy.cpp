#include "StdAfx.h"
#include "Strategy.h"

void CContext::setStrategy(CStrategy* strategy)
{
	this->strategy = strategy;
}

void CContext::OrderCoffee()
{
	this->strategy->OrderCoffee();
}
CStrategy::CStrategy(void)
{
}

CStrategy::~CStrategy(void)
{
}

void COneStrategy::OrderCoffee()
{
	cout<<"Order Cappuccino."<<endl;
}

void CTwoStrategy::OrderCoffee()
{
	cout<<"Order IreLand Coffee."<<endl;
}