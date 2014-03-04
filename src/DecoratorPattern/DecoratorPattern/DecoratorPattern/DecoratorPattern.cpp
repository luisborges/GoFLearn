// DecoratorPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Decorator.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//单个装饰
	cout<<"***********************单个装饰示例***********************"<<endl;
	Component * com1 = new ConcreteComponentA();
	cout<<"未装饰前："<<endl;
	com1->operation();
	cout<<endl;
	CDecorator *dec1 = new CConcreteDecoratorA(com1);
	cout<<"装饰A后："<<endl;
	dec1->operation();
	cout<<endl;

	CDecorator *dec2 = new CConcreteDecoratorB(com1);
	cout<<"装饰B后："<<endl;
	dec2->operation();
	cout<<endl;
	CDecorator *dec3 = new CConcreteDecoratorC(com1);
	cout<<"装饰C后："<<endl;
	dec3->operation();
	cout<<endl;
	cout<<"***************************************************************"<<endl;

	cout<<endl;
	cout<<endl;

	cout<<"***********************链式装饰示例***********************"<<endl;
	cout<<endl;
	Component *com2 = new ConcreteComponentB();
	CDecorator *de1 = new CConcreteDecoratorA(com2);
	CDecorator *de2 = new CConcreteDecoratorB(de1);
	CDecorator *de3 = new CConcreteDecoratorC(de2);
	cout<<"装饰A、B、C后："<<endl;
	de3->operation();
	cout<<"***************************************************************"<<endl;

	return 0;
}

