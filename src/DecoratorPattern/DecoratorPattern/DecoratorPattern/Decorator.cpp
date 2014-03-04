#include "StdAfx.h"
#include "Decorator.h"

Component::Component()
{
}
Component::~Component()
{
}
ConcreteComponentA::ConcreteComponentA()
{

}
ConcreteComponentA::~ConcreteComponentA()
{

}

void ConcreteComponentA::operation()
{
	cout<<"���A��ԭʼ��Ϊ"<<endl;
}

ConcreteComponentB::ConcreteComponentB()
{

}
ConcreteComponentB::~ConcreteComponentB()
{

}

void ConcreteComponentB::operation()
{
	cout<<"���B��ԭʼ��Ϊ"<<endl;
}

CDecorator::CDecorator(void)
{
}

CDecorator::~CDecorator(void)
{
	if (this->compent)
	{
		delete this->compent;
	}
}
void CDecorator::operation()
{
	if (this->compent)
	{
		this->compent->operation();
	}
}
CConcreteDecoratorA::CConcreteDecoratorA(Component*compent)
{
	this->compent = compent;
}

CConcreteDecoratorA::~CConcreteDecoratorA()
{

}

void CConcreteDecoratorA::addExtrasA()
{
	cout<<"װ����ΪA����װ��"<<endl;
}

void CConcreteDecoratorA::operation()
{
	if (this->compent)
	{
		addExtrasA();
		this->compent->operation();
	}
}

CConcreteDecoratorB::CConcreteDecoratorB(Component*compent)
{
	this->compent = compent;
}

CConcreteDecoratorB::~CConcreteDecoratorB()
{

}

void CConcreteDecoratorB::addExtrasB()
{
	cout<<"װ����ΪB����װ��"<<endl;
}

void CConcreteDecoratorB::operation()
{
	if (this->compent)
	{
		addExtrasB();
		this->compent->operation();
	}
}

CConcreteDecoratorC::CConcreteDecoratorC(Component*compent)
{
	this->compent = compent;
}

CConcreteDecoratorC::~CConcreteDecoratorC()
{

}

void CConcreteDecoratorC::addExtrasC()
{
	cout<<"װ����ΪC����װ��"<<endl;
}

void CConcreteDecoratorC::operation()
{
	if (this->compent)
	{
		addExtrasC();
		this->compent->operation();
	}
}