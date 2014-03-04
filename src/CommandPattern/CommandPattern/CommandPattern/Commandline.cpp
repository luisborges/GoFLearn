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
	cout<<"命令实际执行者执行命令!"<<endl;
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
	cout<<"命令行接受调用者命令,进行转发!"<<endl;
	this->commandReceiver->excuteCommand();
}