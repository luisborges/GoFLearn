#include "SimpleFactory.h"
#include "Factory.h"
#include "AbstractFactory.h"

int main()
{
	//////////////简单工厂/////////////////////////////
	//CSimpleFactory* simFac = CSimpleFactory::GetSimpleFactory();
	//CCar* myCar = simFac->MakeCar("BMW");
	//myCar->PrintLable();
	////静态变量，生命周期，程序结束自动释放。若main()内delete，则
	////重复删除，出错。
	////delete simFac;
	////simFac = NULL;

	////////////////普通工厂/////////////////////////////
	//CFactory* fac = new CBenzFactory();
	//CCar* myCar = fac->CreateCar();
	//myCar->PrintLable();
	//delete fac;
	//fac = NULL;

	////////////////抽象工厂/////////////////////////////
	CAbstractFactory* abtfac = new CSportsCarFactory();
	CCar* myCar = abtfac->CreateBMWCar();
	myCar->PrintLable();
	delete abtfac;
	abtfac = NULL;

	delete myCar;
	myCar = NULL;

	return 0;
}