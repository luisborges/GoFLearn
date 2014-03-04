#include "SimpleFactory.h"

CSimpleFactory::CSimpleFactory(void)
{
}

CSimpleFactory::~CSimpleFactory(void)
{
}

CSimpleFactory CSimpleFactory::simpleFactory;
CSimpleFactory* CSimpleFactory::GetSimpleFactory()
{
	return &simpleFactory;
}

CCar* CSimpleFactory::MakeCar(string name)
{
	if (name == string("Benz"))
	{
		return (new CBenzCar());
	}
	if (name == string("BMW"))
	{
		return (new CBMWCar());
	}
}