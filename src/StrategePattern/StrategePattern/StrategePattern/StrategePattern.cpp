// StrategePattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Stratege.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CStratege* stratege = new CStrategeB();
	CContext* context = new CContext(stratege);
	context->operation();
	return 0;
}

