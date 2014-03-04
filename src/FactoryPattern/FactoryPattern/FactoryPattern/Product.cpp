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
	cout<<this->name.c_str()<<"车子的品牌为：奔驰。"<<endl;
}

CBMWCar::CBMWCar(string& name /* = string */):CCar(name)
{
}

CBMWCar::~CBMWCar()
{

}

void CBMWCar::PrintLable()
{
	cout<<this->name.c_str()<<"车子的品牌为：宝马。"<<endl;
}

void CBenzSportsCar::PrintLable()
{
	cout<<this->name.c_str()<<"车子为->奔驰运动系列。"<<endl;
}

void CBMWSportsCar::PrintLable()
{
	cout<<this->name.c_str()<<"车子为->宝马运动系列。"<<endl;
}

void CBenzBusinessCar::PrintLable()
{
	cout<<this->name.c_str()<<"车子为->奔驰商务系列。"<<endl;
}

void CBMWBusinessCar::PrintLable()
{
	cout<<this->name.c_str()<<"车子为->宝马商务系列。"<<endl;
}