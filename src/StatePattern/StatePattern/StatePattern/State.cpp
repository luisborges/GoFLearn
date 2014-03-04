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
	cout<<"A状态下进行操作A，必须！"<<endl;
}

void CStateA::operationB(CContext* context)
{
	cout<<"******进行状态转换A->B******"<<endl;
	cout<<"A状态下进行操作B，可行，且进行状态转换！"<<endl;
	context->setState(new CStateB());
	cout<<"状态转换为B！"<<endl;
}

void CStateA::operationC(CContext* context)
{
	cout<<"A状态下进行操作C，不可行！"<<endl;
}

void CStateB::operationA(CContext* context)
{
	cout<<"B状态下进行操作A，不可行！"<<endl;
}

void CStateB::operationB(CContext* context)
{
	cout<<"B状态下进行操作B，必须！"<<endl;
}

void CStateB::operationC(CContext* context)
{
	cout<<"******进行状态转换B->C******"<<endl;
	cout<<"B状态下进行操作C，可行，且进行状态转换！"<<endl;
	context->setState(new CStateC());
	cout<<"状态转换为C！"<<endl;
}

void CStateC::operationA(CContext* context)
{
	cout<<"******进行状态转换C->A******"<<endl;
	cout<<"C状态下进行操作A，可行，且进行状态转换！"<<endl;
	context->setState(new CStateA());
	cout<<"状态转换为A！"<<endl;
}

void CStateC::operationB(CContext* context)
{
	cout<<"C状态下进行操作B，不可行！"<<endl;
}

void CStateC::operationC(CContext* context)
{
	cout<<"C状态下进行操作C，必须！"<<endl;
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