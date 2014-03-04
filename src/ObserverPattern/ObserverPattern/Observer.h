#include "stdafx.h"
#include <list>
#include <iostream>

using namespace  std;
class Observer;
class Subject
{
public:
	virtual void addObserver(Observer &observer)=0;
	virtual void removeObserver(Observer &observer)=0;
	virtual void notifyAllObserver()=0;
protected:
private:
};

class ConcreteSubject : public Subject
{
public:
	virtual void addObserver(Observer &observer);
	virtual void removeObserver(Observer &observer);
	virtual void notifyAllObserver();

	int getSubjectState();
	void setSubjectState(int state,bool first = true,bool second = true);

	bool isNotifyFirst();
	bool isNotifySecond();
private:
	int Subjectstate;
	bool notifyFirst;
	bool notifySecond;
	std::list<Observer*> observerList;
};

class Observer
{
public:
	virtual void update(int)=0;//推模式
	virtual void update(Subject*)=0;//拉模式
protected:
private:
};

class FirstObserver:public Observer
{
public:
	virtual void update(int);//推模式
	virtual void update(Subject*);//拉模式
	~FirstObserver();
	FirstObserver(std::string name);

private:
	std::string observerName;
	int observerState;

};

class SecondObserver:public Observer
{
public:
	virtual void update(int);//推模式
	virtual void update(Subject*);//拉模式
	~SecondObserver();
	SecondObserver(std::string name);
private:
	std::string observerName;
	int observerState;
};