// ObserverPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Observer.h"
#include <iostream>

using namespace  std;

int _tmain(int argc, _TCHAR* argv[])
{
	ConcreteSubject conSubject;
	FirstObserver firstObserver("FirstObserver");
	SecondObserver secondObserver("SecondObserver");
	conSubject.addObserver(firstObserver);
	conSubject.addObserver(secondObserver);
	//相当于推模式
	std::cout<<"Push Mode:"<<endl;
	conSubject.setSubjectState(0,true,true);
	std::cout<<"Remove firstObserver:"<<endl;
	conSubject.removeObserver(firstObserver);
	conSubject.setSubjectState(1);
	std::cout<<endl;
	

	
	std::cout<<"Add firstObserver again:"<<endl;
	conSubject.addObserver(firstObserver);
	conSubject.setSubjectState(1);
	std::cout<<endl;

	//拉模式
	std::cout<<"Pull Mode:"<<endl;
	conSubject.setSubjectState(0,false,true);
	std::cout<<endl;

	system("PAUSE");

	return 0;
}

