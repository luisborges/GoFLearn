#include "Visitor.h"

class FunctionVis
{
public:
	FunctionVis(CVisitor* vis):vistor(vis)	{}
	void operator()(CElement* element)
	{
		element->Accept(vistor);
	}
private:
	CVisitor* vistor;
};
//void AcceptVisitor(CVisitor* visitor)
//{
//	
//}
int main()
{
	vector<CElement*> vec;
	CElement* ele1 = new CConcreteElement1("ConcreteElement1_1");
	CElement* ele2 = new CConcreteElement2("ConcreteElement2_1");
	CElement* ele3 = new CConcreteElement1("ConcreteElement1_2");
	vec.push_back(ele1);
	vec.push_back(ele2);
	vec.push_back(ele3);

	CVisitor* visitor = new CConcreteVisitor1();
	//FunctionVis vis(visitor);
	for_each(vec.begin(),vec.end(),FunctionVis(visitor));
	//cout<<"Accept CConcreteVisitor1 后："<<endl;
	//for (vector<CElement*>::iterator it = vec.begin();it!= vec.end();it++)
	//{
	//	(*it)->Accept(visitor);
	//}

	//visitor = new CConcreteVisitor2();
	//cout<<"Accept CConcreteVisitor2后："<<endl;
	//for (vector<CElement*>::iterator it = vec.begin();it!= vec.end();it++)
	//{
	//	(*it)->Accept(visitor);
	//}

	for (vector<CElement*>::iterator it = vec.begin();it!= vec.end();it++)
	{
		delete (*it);
	}
	cout<<"delete 后："<<endl;
	cout<<vec.size()<<endl;
	cout<<vec.capacity()<<endl;

	cout<<"clear 后："<<endl;
	vec.clear();
	cout<<vec.size()<<endl;
	cout<<vec.capacity()<<endl;

	vector<CElement*>().swap(vec);

	cout<<"swap 后："<<endl;
	cout<<vec.size()<<endl;
	cout<<vec.capacity()<<endl;

	delete visitor;
	visitor = NULL;
	return 0;
}