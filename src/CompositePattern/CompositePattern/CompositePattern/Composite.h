#pragma once

class CComponent
{
public:
	virtual void operation()=0;
	virtual void addItem(CComponent* component)=0;
	virtual void removeItem(CComponent* component)=0;
protected:
	string name;
};

class CComposite:public CComponent
{
public:
	CComposite(string name);
	~CComposite(void);

	void operation();
	void addItem(CComponent* component);
	void removeItem(CComponent* component);
private:
	list<CComponent*>* componentList;
};

class CLeaf:public CComponent
{
public:
	CLeaf(string name);
	~CLeaf();

	void operation();
	void addItem(CComponent* component);
	void removeItem(CComponent* component);
};
