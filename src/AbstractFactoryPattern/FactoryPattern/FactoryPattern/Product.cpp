#include "Product.h"

CCar::CCar(string& name)
{
	this->name = name;
}

CCar::~CCar(void)
{
}

CBenzCar::CBenzCar(string& name /* = string */):CCar(name)
{
}
CBenzCar::~CBenzCar()
{

};

void CBenzCar::PrintLable()
{
	cout<<this->name.c_str()<<"���ӵ�Ʒ��Ϊ�����ۡ�"<<endl;
}

CBMWCar::CBMWCar(string& name /* = string */):CCar(name)
{
}

CBMWCar::~CBMWCar()
{

}

void CBMWCar::PrintLable()
{
	cout<<this->name.c_str()<<"���ӵ�Ʒ��Ϊ������"<<endl;
}

void CBenzSportsCar::PrintLable()
{
	cout<<this->name.c_str()<<"����Ϊ->�����˶�ϵ�С�"<<endl;
}

void CBMWSportsCar::PrintLable()
{
	cout<<this->name.c_str()<<"����Ϊ->�����˶�ϵ�С�"<<endl;
}

void CBenzBusinessCar::PrintLable()
{
	cout<<this->name.c_str()<<"����Ϊ->��������ϵ�С�"<<endl;
}

void CBMWBusinessCar::PrintLable()
{
	cout<<this->name.c_str()<<"����Ϊ->��������ϵ�С�"<<endl;
}