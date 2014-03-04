// BuilderPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Builder.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//Client ordered a productA (TypeA)
	CDirector* director = new CDirector();
	CClient* client = new CClient(director);
	string product("ProductA");
	client->order(product);
	
	//CBuilder* builder = new ConcreteBuilderA();
	//CDirector* director = new CDirector(builder);
	//director->build();
	return 0;
}

