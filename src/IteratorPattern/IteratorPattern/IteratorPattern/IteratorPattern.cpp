// IteratorPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Iterator.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CConcreteAggregate * concreteAgg = new CConcreteAggregate();

	concreteAgg->set("01");
	concreteAgg->set("02");
	concreteAgg->set("03");
	concreteAgg->set("04");
	concreteAgg->set("05");

	//CIterator* conIter = new CConcreteIterator(concreteAgg);
	CIterator* conIter = concreteAgg->createIterator();
	while(!conIter->IsDone())
	{
		string temp = conIter->CurrentItem();
		cout<<"当前数据为: "<<(temp.c_str())<<endl;
		conIter->Next();
	}
	return 0;
}

