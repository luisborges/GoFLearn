#include "StdAfx.h"
#include "CoR.h"

CContext::CContext(Successor*successor)
 {
	 this->successor = successor;
 }
CContext::~CContext()
{
 }
void CContext::requestVocation(double days)
{
	cout<<"ContextÇëÇó"<<days<<"Ìì¼ÙÆÚ!"<<endl;
	successor->dealRequest(days);
}

void Successor::setSuccessor(Successor * successor)
{
	this->successor = successor;
}
void LeaderSuccessor::dealRequest(double days)
{
	if (days<=0.5)
	{
		cout<<"Leader deals with the request, "<<days<<"\'vocation is approved."<<endl;
	}
	else
	{
		successor->dealRequest(days);
	}
}

void ManagerSuccessor::dealRequest(double days)
{
	if (days<=3&&days>0.5)
	{
		cout<<"Manager deals with the request, "<<days<<"\'vocation is approved."<<endl;
	}
	else
	{
		successor->dealRequest(days);
	}
}

void BossSuccessor::dealRequest(double days)
{
	if (days>3)
	{
		cout<<"Boss deals with the request, "<<days<<"days vocation is approved."<<endl;
	}
	else
	{
		successor->dealRequest(days);
	}
}