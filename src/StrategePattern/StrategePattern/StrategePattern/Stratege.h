#pragma once
#include <iostream>
using namespace  std;

class CStratege
{
public:
	CStratege(void);
	~CStratege(void);

	virtual void stratege()=0;
};

class CStrategeA:public CStratege
{
public:
	void stratege();
};

class CStrategeB:public CStratege
{
public:
	void stratege();
};

class CContext
{
private:
	CStratege* stratege;

public:
	CContext(CStratege* stratege);
	~CContext();

	void operation();
};