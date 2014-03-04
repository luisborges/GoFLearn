// AdapterPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Adapter.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CAdaptee *adaptee = new CAdaptee();
	CTarget *target = new CAdapter(adaptee);
	target->operationNeeded();
	return 0;
}

