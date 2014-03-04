#include "StdAfx.h"
#include "Adapter.h"


void CTarget::operationNeeded()
{
}
CAdapter::CAdapter(CAdaptee* adaptee)
{
	this->adaptee = adaptee;
}


CAdapter::~CAdapter(void)
{
}

void CAdapter::operationNeeded()
{
	this->adaptee->operationExist();
	cout<<"Adapter将存在的接口适配为需要的接口"<<endl;
}

void CAdaptee::operationExist()
{
	cout<<"这是已经存在的接口，需要适应新的接口应用。"<<endl;
}