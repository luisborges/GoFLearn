#pragma once
#include <iostream>
using namespace std;

class CSubject;
class CMediator
{
public:
	virtual void setHandleObject(CSubject* subA,CSubject* subB)=0;
	virtual void handle(CSubject* subject) = 0;
protected:
	CSubject* subA;
	CSubject* subB;

};

class CSubject
{
protected:
	CMediator* mediator;
	double num;
public:
	virtual void setNum(double num)=0;
	virtual double getNum(){ return num;};
};
class CSubjectA:public CSubject
{
public:
	CSubjectA(CMediator* mediator){this->mediator = mediator;};
	~CSubjectA();
	void setNum(double num){this->num = num;/*mediator->handle(this)*/;};
};

class CSubjectB:public CSubject
{
public:
	CSubjectB(CMediator* mediator){this->mediator = mediator;};
	~CSubjectB();

	void setNum(double num){this->num = num;/*this->mediator->handle(this)*/;};
};



class ConcreteMediator:public CMediator
{
public:
	void setHandleObject(CSubject* subA,CSubject* subB){ this->subA = subA; this->subB = subB;};
	void handle(CSubject* subject)
	{
		if(subject == this->subA)
		{
			cout<<"设置A，通过中介者，改变B的值"<<endl;
			cout<<"A的值："<<(this->subA)->getNum()<<endl;
			subB->setNum(subject->getNum()*100);
			cout<<"中介者修改B的值为"<<(this->subB)->getNum()<<endl;
		}
		else if(subject == this->subB)
		{
			cout<<"设置B，通过中介者，改变A的值"<<endl;
			cout<<"B的值："<<(this->subB)->getNum()<<endl;
			subA->setNum(subject->getNum()/100);
			cout<<"中介者修改A的值为"<<(this->subA)->getNum()<<endl;
		}
	};
};