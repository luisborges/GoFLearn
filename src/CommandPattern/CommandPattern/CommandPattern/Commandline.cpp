#include "StdAfx.h"
#include "Commandline.h"
void CCommandInovoker::setCommand(CCommandline* commandline)
{
	this->commandline =  commandline;
}

void CCommandInovoker::excuteCommand()
{
	this->commandline->excuteCommand();
}

void CCommandReceiver::excuteCommand()
{
	cout<<"����ʵ��ִ����ִ������!"<<endl;
}
CCommandline::CCommandline(void)
{
}

CCommandline::~CCommandline(void)
{
}

void CConcreteCommand::setCommandReceiver(CCommandReceiver* commandReceiver)
{
	this->commandReceiver = commandReceiver;
}

void CConcreteCommand::excuteCommand()
{
	cout<<"�����н��ܵ���������,����ת��!"<<endl;
	this->commandReceiver->excuteCommand();
}