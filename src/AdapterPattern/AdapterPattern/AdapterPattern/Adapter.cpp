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
	cout<<"Adapter�����ڵĽӿ�����Ϊ��Ҫ�Ľӿ�"<<endl;
}

void CAdaptee::operationExist()
{
	cout<<"�����Ѿ����ڵĽӿڣ���Ҫ��Ӧ�µĽӿ�Ӧ�á�"<<endl;
}