#pragma once

class CSubject
{
public:
	virtual void open() = 0;
	virtual void close() = 0;
};

class CTV:public CSubject
{
public:
	void open();
	void close();
};

class CLamp:public CSubject
{
public:
	void open();
	void close();
};

class CDVD:public CSubject
{
public:
	void open();
	void close();
};

class CFan:public CSubject
{
public:
	void open();
	void close();
};

class CFacade
{
public:
	CFacade(void);
	~CFacade(void);

	void setSubject(CTV* tv,CDVD* dvd,CLamp* lamp,CFan* fan);

	void open();
	void close();
private:
	CTV* tv;
	CDVD* dvd;
	CLamp* lamp;
	CFan* fan;
};
