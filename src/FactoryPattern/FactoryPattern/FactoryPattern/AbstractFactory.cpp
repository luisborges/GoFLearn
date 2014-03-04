#include "AbstractFactory.h"

CAbstractFactory::CAbstractFactory(void)
{
}

CAbstractFactory::~CAbstractFactory(void)
{
}

CCar* CSportsCarFactory::CreateBenzCar()
{
	return (new CBenzSportsCar());
}

CCar* CSportsCarFactory::CreateBMWCar()
{
	return (new CBMWSportsCar());
}

CCar* CBuinessCarFactory::CreateBenzCar()
{
	return (new CBenzBusinessCar());
}

CCar* CBuinessCarFactory::CreateBMWCar()
{
	return (new CBMWBusinessCar());
}