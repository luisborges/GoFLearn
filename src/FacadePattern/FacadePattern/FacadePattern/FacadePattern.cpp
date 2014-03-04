// FacadePattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Facade.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CTV* tv = new CTV();
	CDVD* dvd = new CDVD();
	CLamp* lamp = new CLamp();
	CFan* fan = new CFan();

	CFacade* facade = new CFacade();
	facade->setSubject(tv,dvd,lamp,fan);
	facade->open();
	facade->close();

	delete facade;
	delete fan;
	delete lamp;
	delete dvd;
	delete tv;

//	system("pause");
	return 0;
}

