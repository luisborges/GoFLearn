#pragma once
#include <iostream>
using namespace std;

class CContext;
class CState
{
public:
	const int STATEA ;
	const int STATEB;
	const int STATEC;
public:
	CState(void);
	~CState(void);

	virtual void operationA(CContext* context) = 0;
	virtual void operationB(CContext* context) = 0;
	virtual void operationC(CContext* context) = 0;
};

class CStateA : public CState
{
public:
	void operationA(CContext* context) ;
	void operationB(CContext* context) ;
	void operationC(CContext* context) ;
};

class CStateB : public CState
{
public:
	void operationA(CContext* context) ;
	void operationB(CContext* context) ;
	void operationC(CContext* context) ;
};

class CStateC : public CState
{
public:
	void operationA(CContext* context) ;
	void operationB(CContext* context) ;
	void operationC(CContext* context) ;
};

class CContext
{
private:
	CState* state;
public:
	CContext();
	~CContext();

	void setState(CState* state);

	void operationA() ;
	void operationB() ;
	void operationC() ;
};