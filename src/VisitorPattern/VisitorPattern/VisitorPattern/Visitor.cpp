#include "Visitor.h"

void CConcreteVisitor1::VisitElement1(CConcreteElement1* element)
{
	cout<<"���ǵ�һ�ֲ�����"<<(element->GetName().c_str())<<endl;
}

void CConcreteVisitor1::VisitElement2(CConcreteElement2* element)
{
	{
		cout<<"���ǵ�һ�ֲ�����"<<(element->GetName().c_str())<<endl;
	}
}

void CConcreteVisitor2::VisitElement1(CConcreteElement1* element)
{
	cout<<"���ǵڶ��ֲ�����"<<(element->GetName().c_str())<<endl;
}

void CConcreteVisitor2::VisitElement2(CConcreteElement2* element)
{
	cout<<"���ǵڶ��ֲ�����"<<(element->GetName().c_str())<<endl;
}

CElement::CElement(string sname):name(sname)
{

}
CElement::~CElement()
{

}