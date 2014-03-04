#include "StdAfx.h"
#include "Singleton.h"

CSingleton* CSingleton::instance =NULL;
CSingleton::CSingleton(void)
{
}

CSingleton* CSingleton::getInstance()
{
	if (instance==NULL)
	{
		instance = new CSingleton();
	}
	return instance;
}
