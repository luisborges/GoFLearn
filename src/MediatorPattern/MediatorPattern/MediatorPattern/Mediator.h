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
			cout<<"����A��ͨ���н��ߣ��ı�B��ֵ"<<endl;
			cout<<"A��ֵ��"<<(this->subA)->getNum()<<endl;
			subB->setNum(subject->getNum()*100);
			cout<<"�н����޸�B��ֵΪ"<<(this->subB)->getNum()<<endl;
		}
		else if(subject == this->subB)
		{
			cout<<"����B��ͨ���н��ߣ��ı�A��ֵ"<<endl;
			cout<<"B��ֵ��"<<(this->subB)->getNum()<<endl;
			subA->setNum(subject->getNum()/100);
			cout<<"�н����޸�A��ֵΪ"<<(this->subA)->getNum()<<endl;
		}
	};
};