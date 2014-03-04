#pragma once

class CTemplate
{
public:
	CTemplate(void);
	~CTemplate(void);

	void templateMethod();

	virtual void otherMethod1()=0;
	virtual void otherMethod2()=0;
	virtual void otherMethod3()=0;
};

class CImplementTemplate:public CTemplate
{
public:
	void otherMethod1();
	void otherMethod2();
	void otherMethod3();
};
