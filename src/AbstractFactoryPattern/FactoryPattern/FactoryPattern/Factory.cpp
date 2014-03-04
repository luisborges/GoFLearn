#include "Factory.h"

CFactory::CFactory(void)
{
}

CFactory::~CFactory(void)
{
}

CCar* CBenzFactory::CreateCar()
{
	return (new CBenzCar());
}

CCar* CBMWFactory::CreateCar()
{
	return (new CBMWCar());
}