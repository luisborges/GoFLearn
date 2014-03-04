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
	cout<<"���ó���A���в���������ʹ�õ������У�"<<endl;
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
	cout<<"���ó���B���в���������ʹ�õ������У�"<<endl;
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
	cout<<"���ó���C���в���������ʹ�õ������У�"<<endl;
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
	cout<<"��һ��ʵ��A�����ԣ�"<<endl;
}


void ImplementB::implement()
{
	cout<<"��һ��ʵ��B�����ԣ�"<<endl;
}

AnotherImplement::AnotherImplement()
{

};

AnotherImplement::~AnotherImplement()
{

};
void AnotherImplementA::anotherImplement()
{
	cout<<"�ڶ���ʵ��A�����ԣ�"<<endl;
}

void AnotherImplementB::anotherImplement()
 {
	cout<<"�ڶ���ʵ��B�����ԣ�"<<endl;
 }