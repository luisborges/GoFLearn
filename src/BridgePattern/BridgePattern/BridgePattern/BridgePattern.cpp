// BridgePattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Bridge.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//һ��������һ��ʵ�ֵ����

	cout<<"*********************һ��������һ��ʵ�ֵ����*********************"<<endl;

	cout<<endl;
	cout<<"*****����A���һ��ʵ��A�����*****"<<endl;
	cout<<endl;
	Implement *implA = new ImplementA();
	Abstract *abtrA = new ConcreteAbstrctA(implA);
	abtrA->abstract();

	cout<<endl;
	cout<<"*****����B��ڶ���ʵ��B�����*****"<<endl;
	cout<<endl;
	AnotherImplement *implB = new AnotherImplementB();
	Abstract *abtrB = new ConcreteAbstrctA(NULL,implB);
	abtrB->abstract();
	cout<<"***************************************************************"<<endl;


	cout<<endl;
	cout<<endl;
	cout<<endl;
	//һ������������ʵ�ֵ����
	cout<<"*********************һ������������ʵ�ֵ����*********************"<<endl;
	cout<<endl;
	cout<<"*****����A���һ��ʵ��A���ڶ���ʵ��B�����*****"<<endl;
	cout<<endl;
	Implement *implA1 = new ImplementA();
	AnotherImplement *implB1 = new AnotherImplementB();
	Abstract *abtr2= new ConcreteAbstrctA(implA1,implB1);
	abtr2->abstract();
	cout<<"***************************************************************"<<endl;

	return 0;
}

