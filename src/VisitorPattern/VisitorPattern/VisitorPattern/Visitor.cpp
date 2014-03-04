#include "Visitor.h"

void CConcreteVisitor1::VisitElement1(CConcreteElement1* element)
{
	cout<<"这是第一种操作："<<(element->GetName().c_str())<<endl;
}

void CConcreteVisitor1::VisitElement2(CConcreteElement2* element)
{
	{
		cout<<"这是第一种操作："<<(element->GetName().c_str())<<endl;
	}
}

void CConcreteVisitor2::VisitElement1(CConcreteElement1* element)
{
	cout<<"这是第二种操作："<<(element->GetName().c_str())<<endl;
}

void CConcreteVisitor2::VisitElement2(CConcreteElement2* element)
{
	cout<<"这是第二种操作："<<(element->GetName().c_str())<<endl;
}

CElement::CElement(string sname):name(sname)
{

}
CElement::~CElement()
{

}