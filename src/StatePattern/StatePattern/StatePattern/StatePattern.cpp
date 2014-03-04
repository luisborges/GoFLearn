// StatePattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "State.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//��ʼ״̬ΪA����ѭ��ת��
	CState* state = new CStateA();

	////��ʼ״̬ΪB
	//CState* state = new CStateB();
	////��ʼ״̬ΪC
	//CState* state = new CStateC();

	CContext *context = new CContext();
	context->setState(state);
	for (int i = 0; i<4;i++)
	{
		cout<<"******************��"<<i<<"������******************"<<endl;
		//context->operationA();
		//context->operationB();
		//context->operationC();
		context->operationC();
		context->operationB();
		context->operationA();
		cout<<endl;
		cout<<endl;
	}
	return 0;
}

