#include "StdAfx.h"
#include "Iterator.h"

CIterator* CConcreteAggregate::createIterator()
{
	return new CConcreteIterator(this);
}
string CConcreteAggregate::get(int index) const
{
	return listAggregate[index];
}

void CConcreteAggregate::set(string aggregate)
{
	 listAggregate.push_back(aggregate);
}

int CConcreteAggregate::Count()const
{
	return listAggregate.size();
}

CIterator::CIterator(void)
{
}

CIterator::~CIterator(void)
{
}

CConcreteIterator::CConcreteIterator(CConcreteAggregate* aggregate)
{
	this->current = 0;
	this->aggregate = aggregate;
}

string CConcreteIterator::First()
{
	this->current = 0;
	return this->aggregate->get(this->current);

}

string CConcreteIterator::Next()
{
	this->current++;
	if (!IsDone())
		return this->aggregate->get(this->current);
}

bool CConcreteIterator::IsDone()
{
	return (this->current==this->aggregate->Count());
}

string CConcreteIterator::CurrentItem() 
{
	return this->aggregate->get(this->current);
}