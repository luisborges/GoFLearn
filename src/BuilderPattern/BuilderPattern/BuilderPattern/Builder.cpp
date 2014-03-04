#include "StdAfx.h"
#include "Builder.h"

CDirector::CDirector()
{

}
CDirector::~CDirector()
{
	if (this->builder)
	{
		delete this->builder;
		this->builder = NULL;
	}

}
void CDirector::setBuilder(CBuilder* builder)
{
	this->builder = builder;
}
void CDirector::build()
{
	this->builder->build();
}

CBuilder::CBuilder(void)
{
}
CBuilder::~CBuilder(void)
{
}
void CBuilder::build()
{	
	buildPart1();
	buildPart2();
	buildPart3();
}
//void ConcreteBuilderA::build()
//{
//	buildPart1();
//	buildPart2();
//	buildPart3();
//}

void ConcreteBuilderA::buildPart1()
{
	cout<<"������A��װ��1����;"<<endl;
}
void ConcreteBuilderA::buildPart2()
{
	cout<<"������A��װ��2����;"<<endl;
}
void ConcreteBuilderA::buildPart3()
{
	cout<<"������A��װ��3����;"<<endl;
}

//void ConcreteBuilderB::build()
//{
//	buildPart1();
//	buildPart2();
//	buildPart3();
//}

void ConcreteBuilderB::buildPart1()
{
	cout<<"������B��װ��1����;"<<endl;
}
void ConcreteBuilderB::buildPart2()
{
	cout<<"������B��װ��2����;"<<endl;
}
void ConcreteBuilderB::buildPart3()
{
	cout<<"������B��װ��3����;"<<endl;
}

CClient::CClient(CDirector* director)
{
	this->director = director;
}

CClient::~CClient()
{
	if (this->director)
	{
		delete this->director;
		this->director = NULL;	
	}
};

void CClient::order(string& product)
{
	//if (this->director->builder)
	//{
	//	delete this->director->builder;
	//	this->director->builder = NULL;
	//}

	CBuilder * tmpBuilder =NULL;
	string strCompare("ProductA" );
	if (product.compare(strCompare)==0)
	{
		tmpBuilder = new ConcreteBuilderA();
		this->director->setBuilder(tmpBuilder);
	}
	else
	{
		CBuilder * tmpBuilder = new ConcreteBuilderB();
		this->director->setBuilder(tmpBuilder);
		//this->director->build();
		//delete tmpBuilder;
	}

	this->director->build();
	delete tmpBuilder;
}