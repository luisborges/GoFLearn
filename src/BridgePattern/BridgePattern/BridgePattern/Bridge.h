#pragma once
#include <iostream>
using namespace std;

class Implement;
class AnotherImplement;
class Abstract
{
protected:
	Implement *implement;
	AnotherImplement *anotherimplement;
public:
	Abstract();
	~Abstract();

	virtual void abstract() = 0;
};

class ConcreteAbstrctA:public Abstract
{
public:
	ConcreteAbstrctA(Implement* implement,AnotherImplement *anotherimplement = NULL);
	~ConcreteAbstrctA();
public:
	void abstract();
private:
	void abstractA();
};

class ConcreteAbstrctB:public Abstract
{
public:
	ConcreteAbstrctB(Implement* implement,AnotherImplement *anotherimplement = NULL);
	~ConcreteAbstrctB();
public:
	void abstract();
private:
	void abstractB();
};

class ConcreteAbstrctC:public Abstract
{
public:
	ConcreteAbstrctC(Implement* implement,AnotherImplement *anotherimplement = NULL);
	~ConcreteAbstrctC();
public:
	void abstract();
private:
	void abstractC();
};

class Implement
{
public:
	Implement(void);
	~Implement(void);
	virtual void implement() = 0;
};

class ImplementA:public Implement
{
public:
	void implement();
};

class ImplementB:public Implement
{
public:
	void implement();
};

class AnotherImplement
{
public:
	AnotherImplement(void);
	~AnotherImplement(void);
	virtual void anotherImplement() = 0;
};

class AnotherImplementA:public AnotherImplement
{
public:
	void anotherImplement();
};

class AnotherImplementB:public AnotherImplement
{
public:
	void anotherImplement();
};