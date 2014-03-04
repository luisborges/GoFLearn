#include "StdAfx.h"
#include "State.h"

CState::CState(void):STATEA(0),STATEB(1),STATEC(3)
{
}

CState::~CState(void)
{
}

void CStateA::operationA(CContext* context)
{
	cout<<"A״̬�½��в���A�����룡"<<endl;
}

void CStateA::operationB(CContext* context)
{
	cout<<"******����״̬ת��A->B******"<<endl;
	cout<<"A״̬�½��в���B�����У��ҽ���״̬ת����"<<endl;
	context->setState(new CStateB());
	cout<<"״̬ת��ΪB��"<<endl;
}

void CStateA::operationC(CContext* context)
{
	cout<<"A״̬�½��в���C�������У�"<<endl;
}

void CStateB::operationA(CContext* context)
{
	cout<<"B״̬�½��в���A�������У�"<<endl;
}

void CStateB::operationB(CContext* context)
{
	cout<<"B״̬�½��в���B�����룡"<<endl;
}

void CStateB::operationC(CContext* context)
{
	cout<<"******����״̬ת��B->C******"<<endl;
	cout<<"B״̬�½��в���C�����У��ҽ���״̬ת����"<<endl;
	context->setState(new CStateC());
	cout<<"״̬ת��ΪC��"<<endl;
}

void CStateC::operationA(CContext* context)
{
	cout<<"******����״̬ת��C->A******"<<endl;
	cout<<"C״̬�½��в���A�����У��ҽ���״̬ת����"<<endl;
	context->setState(new CStateA());
	cout<<"״̬ת��ΪA��"<<endl;
}

void CStateC::operationB(CContext* context)
{
	cout<<"C״̬�½��в���B�������У�"<<endl;
}

void CStateC::operationC(CContext* context)
{
	cout<<"C״̬�½��в���C�����룡"<<endl;
}

CContext::CContext()
{

}
CContext::~CContext()
{

}
void CContext::setState(CState* state)
{
	this->state = state;
}

void CContext::operationA()
{
	this->state->operationA(this);
}

void CContext::operationB()
{
	this->state->operationB(this);
}

void CContext::operationC()
{
	this->state->operationC(this);
}