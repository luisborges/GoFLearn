#include "stdafx.h"
#include "Prototype.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CPrototype* cp1 =new CPrototype("zz");
	cp1->setInfo("Male",24);

	CPrototype* cp2 = cp1->cloneObject();
	cp2->setInfo("Famel",25);

	cp1->display();
	cp2->display();

	//delete cp2;
	//cp2 = NULL;
	delete cp1;
	cp1 = NULL;
	return 0;
}