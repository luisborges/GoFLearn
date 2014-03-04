// BridgePattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Bridge.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//一个抽象与一个实现的耦合

	cout<<"*********************一个抽象与一个实现的耦合*********************"<<endl;

	cout<<endl;
	cout<<"*****抽象A与第一种实现A的耦合*****"<<endl;
	cout<<endl;
	Implement *implA = new ImplementA();
	Abstract *abtrA = new ConcreteAbstrctA(implA);
	abtrA->abstract();

	cout<<endl;
	cout<<"*****抽象B与第二种实现B的耦合*****"<<endl;
	cout<<endl;
	AnotherImplement *implB = new AnotherImplementB();
	Abstract *abtrB = new ConcreteAbstrctA(NULL,implB);
	abtrB->abstract();
	cout<<"***************************************************************"<<endl;


	cout<<endl;
	cout<<endl;
	cout<<endl;
	//一个抽象与两个实现的耦合
	cout<<"*********************一个抽象与两个实现的耦合*********************"<<endl;
	cout<<endl;
	cout<<"*****抽象A与第一种实现A、第二种实现B的耦合*****"<<endl;
	cout<<endl;
	Implement *implA1 = new ImplementA();
	AnotherImplement *implB1 = new AnotherImplementB();
	Abstract *abtr2= new ConcreteAbstrctA(implA1,implB1);
	abtr2->abstract();
	cout<<"***************************************************************"<<endl;

	return 0;
}

