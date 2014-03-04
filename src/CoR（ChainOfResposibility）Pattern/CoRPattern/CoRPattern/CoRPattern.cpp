// CoRPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CoR.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Successor* leaderSuccessor = new LeaderSuccessor();
	Successor* managerSuccessor = new ManagerSuccessor();
	Successor* bossSuccessor = new BossSuccessor();

	leaderSuccessor->setSuccessor(managerSuccessor);
	managerSuccessor->setSuccessor(bossSuccessor);

	CContext *context = new CContext(leaderSuccessor);
	context->requestVocation(5);
	return 0;
}

