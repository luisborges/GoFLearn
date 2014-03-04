#include "StdAfx.h"
#include "Proxy.h"

CComponent::CComponent()
{

}

CComponent::~CComponent()
{

}


CConcreteComponent::CConcreteComponent(string name)
{
	this->name = name;
}

CConcreteComponent::~CConcreteComponent()
{

}
void CConcreteComponent::operation()
{
	cout<<"..............ʵ�ʲ�������ִ��..................."<<endl;

}

string CConcreteComponent::getName()
{
	return this->name;
}

void CConcreteComponent::setProxy(CComponent* component)
{

}

CProxy::CProxy(string name)
{
	this->name = name;
//	this->component = component;
}

CProxy::~CProxy(void)
{
}
void CProxy::setProxy(CComponent* component)
{
	this->component = component;
}
string CProxy::getName()
{
	return this->name;
}
void CProxy::operation()
{
	if (this->component->getName().compare("Handsome")==0)
	{
		cout<<this->getName().c_str()<<"����"<<this->component->getName().c_str()<<"ִ�в���"<<endl;
		this->component->operation();
	}
	else
	{
		cout<<this->getName().c_str()<<"������"<<this->component->getName().c_str()<<"ִ�в�����"<<endl;
	}
}
