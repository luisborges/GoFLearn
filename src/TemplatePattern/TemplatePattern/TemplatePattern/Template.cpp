#include "StdAfx.h"
#include "Template.h"

CTemplate::CTemplate(void)
{
}

CTemplate::~CTemplate(void)
{
}

void CTemplate::templateMethod()
{
	this->otherMethod1();
	this->otherMethod2();
	this->otherMethod3();
}

void CImplementTemplate::otherMethod1()
{
	cout<<"other实现的方法1."<<endl;
}

void CImplementTemplate::otherMethod2()
{
	cout<<"other实现的方法2."<<endl;
}

void CImplementTemplate::otherMethod3()
{
	cout<<"other实现的方法3."<<endl;
}