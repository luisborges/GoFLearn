// ProxyPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Proxy.h"
int _tmain(int argc, _TCHAR* argv[])
{
	string name1 = "Handsome";
	CComponent *component = new CConcreteComponent(name1);
	CComponent * proxy = new CProxy("代理者小A");
	proxy->setProxy(component);
	proxy->operation();

	delete component;
	component = NULL;

	string name2 = "Ugly";
	CComponent *component1 = new CConcreteComponent(name2);
	proxy->setProxy(component1);
	proxy->operation();

	delete component1;
	component1 = NULL;

	delete proxy;
	proxy = NULL;

	return 0;
}

