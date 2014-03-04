// Template_Strategy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Template.h"
#include "Strategy.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//////////////////Template Tests.///////////////////////////////
	cout<<"��ʼTemplate����."<<endl;
	CFirstTemplate* tem1 = new CFirstTemplate();
	tem1->DrinkCoffeeInCoffeeStore();
	delete tem1;
	tem1 = NULL;//��ֹҰָ��

	CSecondTemplate* tem2 = new CSecondTemplate();
	tem2->DrinkCoffeeInCoffeeStore();
	delete tem2;
	tem2 = NULL;

	cout<<"����Template����."<<endl;
	cout<<endl;

	////////////////////////Strategy Tests./////////////////////////////////
	cout<<"��ʼStrategy����."<<endl;
	CContext* context = new CContext();
	CStrategy* stratery = new COneStrategy();
	context->setStrategy(stratery);
	context->OrderCoffee();
	delete stratery;
	stratery = NULL;

	if (stratery==NULL)
	{
		stratery = new CTwoStrategy();
	}
	context->setStrategy(stratery);
	context->OrderCoffee();
	cout<<"����Strategy����."<<endl;
	cout<<endl;

	return 0;
}

