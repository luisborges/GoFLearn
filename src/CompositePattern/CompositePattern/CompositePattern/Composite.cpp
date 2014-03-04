#include "StdAfx.h"
#include "Composite.h"

CComposite::CComposite(string name)
{
	componentList = new list<CComponent*>();
	this->name = name;
}

CComposite::~CComposite(void)
{
	list<CComponent*>::iterator it = componentList->begin();
	for (;it!=componentList->end();++it)
	{
		componentList->erase(it);
	}
	delete componentList;
	componentList = NULL;
}

void CComposite::operation()
{
	cout<<"目录"<<this->name.c_str()<<"下的文件列表："<<endl;
	list<CComponent*>::iterator it = componentList->begin();
	for (;it!=componentList->end();++it)
	{
		(*it)->operation();
	}
}

void CComposite::addItem(CComponent* component)
{
	componentList->push_back(component);
}

void CComposite::removeItem(CComponent* component)
{
	componentList->remove(component);
}


CLeaf::CLeaf(string name)
{
	this->name = name;
}

CLeaf::~CLeaf()
{

}

void CLeaf::operation()
{
	cout<<"           "<<this->name.c_str()<<"."<<endl;
}

void CLeaf::addItem(CComponent* component)
{

}

void CLeaf::removeItem(CComponent* component)
{

}