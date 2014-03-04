// MediatorPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Mediator.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CMediator* mediator = new ConcreteMediator();

	CSubject* subA = new CSubjectA(mediator);
	CSubject* subB = new CSubjectB(mediator);

	mediator->setHandleObject(subA,subB);
	subA->setNum(1.0);
	mediator->handle(subA);

	cout<<endl;

	subB->setNum(10000.0);
	mediator->handle(subB);

	return 0;
}

