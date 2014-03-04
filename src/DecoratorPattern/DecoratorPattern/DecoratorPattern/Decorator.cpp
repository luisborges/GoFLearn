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
	cout<<"组件A的原始行为"<<endl;
}

ConcreteComponentB::ConcreteComponentB()
{

}
ConcreteComponentB::~ConcreteComponentB()
{

}

void ConcreteComponentB::operation()
{
	cout<<"组件B的原始行为"<<endl;
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
	cout<<"装饰行为A正在装饰"<<endl;
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
	cout<<"装饰行为B正在装饰"<<endl;
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
	cout<<"装饰行为C正在装饰"<<endl;
}

void CConcreteDecoratorC::operation()
{
	if (this->compent)
	{
		addExtrasC();
		this->compent->operation();
	}
}