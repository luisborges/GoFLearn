#pragma once

class CIterator;
class CAggregate
{
public:
	virtual CIterator* createIterator() = 0;
};

class CConcreteAggregate
{
public:
	CIterator* createIterator();

	string get(int index) const;
	void set(string aggregate);
	int Count() const;

protected:
	vector<string> listAggregate;
	int index;
};

class CIterator
{
public:
	CIterator(void);
	~CIterator(void);

	virtual string First() = 0;
	virtual string Next() = 0;
	virtual bool IsDone() =0;
	virtual string CurrentItem() = 0;
};

class CConcreteIterator:public CIterator
{
public:

	CConcreteIterator(CConcreteAggregate* aggregate);

	string First();
	string Next() ;
	bool IsDone() ;
	string CurrentItem() ;
private:
	CConcreteAggregate* aggregate;
	int  current;
};