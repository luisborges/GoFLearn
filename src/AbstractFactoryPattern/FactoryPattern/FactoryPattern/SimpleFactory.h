#pragma once
#include "Product.h"
class CSimpleFactory
{
public:
	~CSimpleFactory(void);
private:
	CSimpleFactory(void);
	CSimpleFactory(const CSimpleFactory&);
	CSimpleFactory& operator=(const CSimpleFactory&);

public:
	static CSimpleFactory* GetSimpleFactory();
	
	static CCar* MakeCar(string name);
private:
	static CSimpleFactory simpleFactory;
};
