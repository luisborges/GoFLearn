// StatePattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "State.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//初始状态为A，则循环转换
	CState* state = new CStateA();

	////初始状态为B
	//CState* state = new CStateB();
	////初始状态为C
	//CState* state = new CStateC();

	CContext *context = new CContext();
	context->setState(state);
	for (int i = 0; i<4;i++)
	{
		cout<<"******************第"<<i<<"次运行******************"<<endl;
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

