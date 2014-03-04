// Template_Strategy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Template.h"
#include "Strategy.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//////////////////Template Tests.///////////////////////////////
	cout<<"¿ªÊ¼Template²âÊÔ."<<endl;
	CFirstTemplate* tem1 = new CFirstTemplate();
	tem1->DrinkCoffeeInCoffeeStore();
	delete tem1;
	tem1 = NULL;//·ÀÖ¹Ò°Ö¸Õë

	CSecondTemplate* tem2 = new CSecondTemplate();
	tem2->DrinkCoffeeInCoffeeStore();
	delete tem2;
	tem2 = NULL;

	cout<<"½áÊøTemplate²âÊÔ."<<endl;
	cout<<endl;

	////////////////////////Strategy Tests./////////////////////////////////
	cout<<"¿ªÊ¼Strategy²âÊÔ."<<endl;
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
	cout<<"½áÊøStrategy²âÊÔ."<<endl;
	cout<<endl;

	return 0;
}

