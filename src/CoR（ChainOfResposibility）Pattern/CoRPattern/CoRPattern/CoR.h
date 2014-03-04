#pragma once
#include <iostream>
using namespace std;

class Successor;
class CContext
{
public:
	CContext(Successor* successor);
	~CContext();
	void requestVocation(double  days);
protected:
	Successor* successor;
};

class Successor
{
public:
	virtual void setSuccessor(Successor * successor) ;
	virtual void dealRequest( double days) = 0;
protected:
	Successor* successor;
};

class LeaderSuccessor:public Successor
{
public:
	//void setSuccessor(Successor * successor);
	void dealRequest(double  days);
};

class ManagerSuccessor:public Successor
{
public:
	//void setSuccessor(Successor * successor);
	void dealRequest(double  days);
};

class BossSuccessor:public Successor
{
public:
	//void setSuccessor(Successor * successor);
	void dealRequest(double  days);
};
