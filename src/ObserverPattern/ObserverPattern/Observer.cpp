#include "stdafx.h"
#include "Observer.h"
using namespace  std;
void ConcreteSubject::addObserver(Observer &observer)
{
	observerList.push_back(&observer);
}

void ConcreteSubject::removeObserver(Observer &observer)
{
	observerList.remove(&observer);
}

void ConcreteSubject::notifyAllObserver()
{
	for (std::list<Observer*>::iterator it = observerList.begin(); it != observerList.end();it++)
	{
		//(*it)->update(getSubjectState());//推模式
		(*it)->update(this);//拉模式
	}
}

int ConcreteSubject::getSubjectState()
{
	return Subjectstate;
}

void ConcreteSubject::setSubjectState(int state,bool first ,bool second)
{
	Subjectstate = state;
	notifyFirst = first;
	notifySecond = second;
	notifyAllObserver();
}

bool ConcreteSubject::isNotifyFirst()
{
	return notifyFirst;
}

bool ConcreteSubject::isNotifySecond()
{
	return notifySecond;
}

FirstObserver::FirstObserver(std::string name):observerName(name)
{

}
FirstObserver::~FirstObserver()
{

}
void FirstObserver::update(int state)
{
	observerState = state;
	std::cout<<observerName.c_str()<<"'s "<<"state is "<<observerState<<std::endl;
}

void FirstObserver::update(Subject* subject)
{
	if(((ConcreteSubject*)subject)->isNotifyFirst()) 
	{
		observerState = ((ConcreteSubject*)subject)->getSubjectState();
		std::cout<<observerName.c_str()<<"'s "<<"state is "<<observerState<<std::endl;
	}
}

SecondObserver::~SecondObserver()
{

}
SecondObserver::SecondObserver(std::string name):observerName(name)
{

}
void SecondObserver::update(int state)
{
	observerState = state;
	std::cout<<observerName.c_str()<<"'s "<<"state is "<<observerState<<std::endl;
}
void SecondObserver::update(Subject* subject)
{
	if(((ConcreteSubject*)subject)->isNotifySecond()) 
	{
		observerState =((ConcreteSubject*)subject)->getSubjectState();
		std::cout<<observerName.c_str()<<"'s "<<"state is "<<observerState<<std::endl;
	}
}