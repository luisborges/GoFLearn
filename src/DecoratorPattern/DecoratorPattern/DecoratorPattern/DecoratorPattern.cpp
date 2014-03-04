// DecoratorPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Decorator.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//����װ��
	cout<<"***********************����װ��ʾ��***********************"<<endl;
	Component * com1 = new ConcreteComponentA();
	cout<<"δװ��ǰ��"<<endl;
	com1->operation();
	cout<<endl;
	CDecorator *dec1 = new CConcreteDecoratorA(com1);
	cout<<"װ��A��"<<endl;
	dec1->operation();
	cout<<endl;

	CDecorator *dec2 = new CConcreteDecoratorB(com1);
	cout<<"װ��B��"<<endl;
	dec2->operation();
	cout<<endl;
	CDecorator *dec3 = new CConcreteDecoratorC(com1);
	cout<<"װ��C��"<<endl;
	dec3->operation();
	cout<<endl;
	cout<<"***************************************************************"<<endl;

	cout<<endl;
	cout<<endl;

	cout<<"***********************��ʽװ��ʾ��***********************"<<endl;
	cout<<endl;
	Component *com2 = new ConcreteComponentB();
	CDecorator *de1 = new CConcreteDecoratorA(com2);
	CDecorator *de2 = new CConcreteDecoratorB(de1);
	CDecorator *de3 = new CConcreteDecoratorC(de2);
	cout<<"װ��A��B��C��"<<endl;
	de3->operation();
	cout<<"***************************************************************"<<endl;

	return 0;
}

