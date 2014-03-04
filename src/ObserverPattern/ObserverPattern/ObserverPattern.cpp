// ObserverPattern.cpp : �������̨Ӧ�ó������ڵ㡣
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
	//�൱����ģʽ
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

	//��ģʽ
	std::cout<<"Pull Mode:"<<endl;
	conSubject.setSubjectState(0,false,true);
	std::cout<<endl;

	system("PAUSE");

	return 0;
}

