// MemotoPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Memoto.h"

int _tmain(int argc, _TCHAR* argv[])
{
	COrgnizer* orgnizer = new COrgnizer();
	orgnizer->setState("Old State");
	cout<<"��ʼ״̬Ϊ: "<<orgnizer->getState().c_str()<<endl;
	CManager* manager = new CManager();
	manager->setMemoto(orgnizer->createMemoto());

	orgnizer->setState("New State");
	cout<<"�µ�״̬Ϊ: "<<orgnizer->getState().c_str()<<endl;

	orgnizer->restoreAllState(manager->getMemoto());
	cout<<"�ָ�״̬Ϊ: "<<orgnizer->getState().c_str()<<endl;

	return 0;
}

