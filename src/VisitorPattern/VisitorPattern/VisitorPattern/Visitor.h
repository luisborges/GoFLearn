

#include "Dependents.h"

class CElement;
class CConcreteElement1;
class CConcreteElement2;
class CVisitor
{
public:
	virtual void VisitElement1(CConcreteElement1* element) = 0;
	virtual void VisitElement2(CConcreteElement2* element) = 0;
};

class CConcreteVisitor1:public CVisitor
{
public:
	void VisitElement1(CConcreteElement1* element);
	void VisitElement2(CConcreteElement2* element);
};

class CConcreteVisitor2:public CVisitor
{
public:
	void VisitElement1(CConcreteElement1* element);
	void VisitElement2(CConcreteElement2* element);
};

class CElement
{
public:
	CElement(string sname = "");
	virtual ~CElement();
	virtual void Accept(CVisitor* visitor) = 0;
	string GetName()
	{
		return this->name;
	}

protected:
	string name;
};

class CConcreteElement1:public CElement
{
public:
	CConcreteElement1(string sname = ""):CElement(sname){};
	void Accept(CVisitor* visitor)
	{
		visitor->VisitElement1(this);
	}
};

class CConcreteElement2:public CElement
{
public:
	CConcreteElement2(string sname = ""):CElement(sname){};
	~CConcreteElement2()
	{

	}
	void Accept(CVisitor* visitor)
	{
		visitor->VisitElement2(this);
	}

	
};
