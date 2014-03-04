#include "StdAfx.h"
#include "Facade.h"
#include <iostream>
using namespace std;

CFacade::CFacade(void)
{
}

CFacade::~CFacade(void)
{
}

void CFacade::setSubject(CTV* tv,CDVD* dvd,CLamp* lamp,CFan* fan)
{
	this->tv = tv;
	this->dvd = dvd;
	this->lamp = lamp;
	this->fan = fan;
}
void CFacade::open()
{
	tv->open();
	dvd->open();
	lamp->open();
	fan->open();
}

void CFacade::close()
{
	tv->close();
	dvd->close();
	lamp->close();
	fan->close();
}

void CTV::open()
{
	cout<<"TV is opened."<<endl;
}

void CTV::close()
{
	cout<<"TV is closed."<<endl;
}

void CDVD::open()
{
	cout<<"DVD is opened."<<endl;
}

void CDVD::close()
{
	cout<<"DVD is closed."<<endl;
}
void CLamp::open()
{
	cout<<"Lamp is opened."<<endl;
}

void CLamp::close()
{
	cout<<"Lamp is closed."<<endl;
}
void CFan::open()
{
	cout<<"Fan is opened."<<endl;
}

void CFan::close()
{
	cout<<"Fan is closed."<<endl;
}