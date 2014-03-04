#pragma once
#include <iostream>
using namespace std;

class CAdaptee;
class CTarget
{
public:
	virtual void operationNeeded();
};
class CAdapter:public CTarget
{
private:
	CAdaptee* adaptee;
public:
	CAdapter(CAdaptee* adaptee);
	~CAdapter(void);

	void operationNeeded();
};

class CAdaptee
{
public:
	void operationExist();
};