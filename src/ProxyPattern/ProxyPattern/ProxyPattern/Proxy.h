#pragma once

class CComponent
{
public:
	CComponent();
	virtual ~CComponent();
	virtual void operation() = 0;
	virtual string getName() = 0;
	virtual void setProxy(CComponent* component)=0;
protected:
	string name;
};

class CConcreteComponent:public CComponent
{
public:
	CConcreteComponent(string name);
	~CConcreteComponent();
	void operation();
	string getName();
	void setProxy(CComponent* component);
};
class CProxy:public CComponent
{
public:
	CProxy(string name);
	~CProxy(void);
	void operation();
	void setProxy(CComponent* component);
	string getName();
private:
	CComponent* component;
};
