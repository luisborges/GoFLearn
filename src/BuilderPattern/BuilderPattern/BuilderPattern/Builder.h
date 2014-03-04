#pragma once

class CBuilder;
class CDirector
{
public:
	CDirector();
	~CDirector();

	void setBuilder(CBuilder* builder);
	void build();
private:
	CBuilder* builder;
};
class CBuilder
{
public:
	CBuilder(void);
	virtual ~CBuilder(void);

	virtual void build();
private:
	virtual void buildPart1() = 0;
	virtual void buildPart2() = 0;
	virtual void buildPart3() = 0;
};

class ConcreteBuilderA:public CBuilder
{
public:
	//void build();
private:
	void buildPart1();
	void buildPart2();
	void buildPart3();
};

class ConcreteBuilderB:public CBuilder
{
public:
	//void build();
private:
	void buildPart1();
	void buildPart2();
	void buildPart3();
};

class CClient
{
public:
	CClient(CDirector* director);
	~CClient();
	void order(string& product);
private:
	CDirector* director;
};