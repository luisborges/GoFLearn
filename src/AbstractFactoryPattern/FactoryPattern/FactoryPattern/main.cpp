#include "SimpleFactory.h"
#include "Factory.h"
#include "AbstractFactory.h"

int main()
{
	//////////////�򵥹���/////////////////////////////
	//CSimpleFactory* simFac = CSimpleFactory::GetSimpleFactory();
	//CCar* myCar = simFac->MakeCar("BMW");
	//myCar->PrintLable();
	////��̬�������������ڣ���������Զ��ͷš���main()��delete����
	////�ظ�ɾ��������
	////delete simFac;
	////simFac = NULL;

	////////////////��ͨ����/////////////////////////////
	//CFactory* fac = new CBenzFactory();
	//CCar* myCar = fac->CreateCar();
	//myCar->PrintLable();
	//delete fac;
	//fac = NULL;

	////////////////���󹤳�/////////////////////////////
	CAbstractFactory* abtfac = new CSportsCarFactory();
	CCar* myCar = abtfac->CreateBMWCar();
	myCar->PrintLable();
	delete abtfac;
	abtfac = NULL;

	delete myCar;
	myCar = NULL;

	return 0;
}