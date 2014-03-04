// CommandPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Commandline.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CCommandReceiver* receiver = new CCommandReceiver();
	CCommandline* command = new CConcreteCommand();
	command->setCommandReceiver(receiver);
	CCommandInovoker* invoker = new CCommandInovoker();
	invoker->setCommand(command);

	invoker->excuteCommand();
	return 0;
}

