#include "StdAfx.h"
#include "Bridge.h"

Abstract::Abstract(void)
{
}

Abstract::~Abstract(void)
{
}

ConcreteAbstrctA::ConcreteAbstrctA(Implement* implement,AnotherImplement *anotherimplement)
{
	this->implement = implement;
	this->anotherimplement = anotherimplement;
}

ConcreteAbstrctA::~ConcreteAbstrctA()
{
	if (this->implement)
	{
		delete this->implement;
		this->implement = NULL;
	}
	if (this->anotherimplement)
	{
		delete this->anotherimplement;
		this->anotherimplement = NULL;
	}
}

void ConcreteAbstrctA::abstractA()
{
	cout<<"利用抽象A进行操作，其所使用的属性有："<<endl;
}

void ConcreteAbstrctA::abstract()
{
	abstractA();
	if (this->implement)
	{
		this->implement->implement();
	}
	if (this->anotherimplement)
	{
		this->anotherimplement->anotherImplement();
	}
}

ConcreteAbstrctB::ConcreteAbstrctB(Implement* implement,AnotherImplement *anotherimplement)
{
	this->implement = implement;
	this->anotherimplement = anotherimplement;
}

ConcreteAbstrctB::~ConcreteAbstrctB()
{
	if (this->implement)
	{
		delete this->implement;
		this->implement = NULL;
	}
	if (this->anotherimplement)
	{
		delete this->anotherimplement;
		this->anotherimplement = NULL;
	}
}

void ConcreteAbstrctB::abstractB()
{
	cout<<"利用抽象B进行操作，其所使用的属性有："<<endl;
}

void ConcreteAbstrctB::abstract()
{
	abstractB();
	if (this->implement)
	{
		this->implement->implement();
	}
	if (this->anotherimplement)
	{
		this->anotherimplement->anotherImplement();
	}
}

ConcreteAbstrctC::ConcreteAbstrctC(Implement* implement,AnotherImplement *anotherimplement)
{
	this->implement = implement;
	this->anotherimplement = anotherimplement;
}

ConcreteAbstrctC::~ConcreteAbstrctC()
{
	if (this->implement)
	{
		delete this->implement;
		this->implement = NULL;
	}
	if (this->anotherimplement)
	{
		delete this->anotherimplement;
		this->anotherimplement = NULL;
	}
}

void ConcreteAbstrctC::abstractC()
{
	cout<<"利用抽象C进行操作，其所使用的属性有："<<endl;
}

void ConcreteAbstrctC::abstract()
{
	abstractC();
	if (this->implement)
	{
		this->implement->implement();
	}
	if (this->anotherimplement)
	{
		this->anotherimplement->anotherImplement();
	}
}

Implement::Implement()
{
};

Implement::~Implement()
{
}


void ImplementA::implement()
{
	cout<<"第一种实现A的属性："<<endl;
}


void ImplementB::implement()
{
	cout<<"第一种实现B的属性："<<endl;
}

AnotherImplement::AnotherImplement()
{

};

AnotherImplement::~AnotherImplement()
{

};
void AnotherImplementA::anotherImplement()
{
	cout<<"第二种实现A的属性："<<endl;
}

void AnotherImplementB::anotherImplement()
 {
	cout<<"第二种实现B的属性："<<endl;
 }