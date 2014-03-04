#pragma once
#include <string>
#include <iostream>
using namespace std;

class Component
{
public:
	Component();
	~Component();
public:
	virtual void operation()=0;

};

class ConcreteComponentA:public Component
{
public:
	ConcreteComponentA();
	~ConcreteComponentA();
public:
	void operation();
};

class ConcreteComponentB:public Component
{
public:
		ConcreteComponentB();
		~ConcreteComponentB();
public:
	void operation();
};

class CDecorator:public Component
{
public:
	CDecorator();
	~CDecorator(void);
public:
	virtual void operation()=0;
protected:
	Component *compent;
};

class CConcreteDecoratorA:public CDecorator
{
public:
	CConcreteDecoratorA(Component* compent);
	~CConcreteDecoratorA();
public:
	void operation();
private:
	void addExtrasA();
};

class CConcreteDecoratorB:public CDecorator
{
public:
	CConcreteDecoratorB(Component* compent);
	~CConcreteDecoratorB();
public:
	void operation();
private:
	void addExtrasB();
};

class CConcreteDecoratorC:public CDecorator
{
public:
	CConcreteDecoratorC(Component* compent);
	~CConcreteDecoratorC();
public:
	void operation();
private:
	void addExtrasC();
};