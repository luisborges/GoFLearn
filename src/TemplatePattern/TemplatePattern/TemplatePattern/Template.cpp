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
	cout<<"otherʵ�ֵķ���1."<<endl;
}

void CImplementTemplate::otherMethod2()
{
	cout<<"otherʵ�ֵķ���2."<<endl;
}

void CImplementTemplate::otherMethod3()
{
	cout<<"otherʵ�ֵķ���3."<<endl;
}