// TemplatePattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Template.h"
int _tmain(int argc, _TCHAR* argv[])
{
	CTemplate* tmp = new CImplementTemplate();
	tmp->templateMethod();

	return 0;
}

