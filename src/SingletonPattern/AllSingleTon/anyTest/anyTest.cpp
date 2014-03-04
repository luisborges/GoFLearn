// anyTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SingletonCommon.h"
#include "SingletonXX.h"
#include "SingletonArtistic.h"
#include "SingletonArtisticPlus.h"
#include "QQSingleton.h"
#include "BoostSingleton.h"

class A
{
public:
	//A(int i)
	//{
	//	this->id = i;
	//};
	~A()
	{

	}
private:
	int id;
};

template<class T>
void test(const T* t1,const T* t2)
{
	if (t1 == t2)
		cout<<"测试的两个实例相同!"<<endl;
	else
		cout<<"测试的两个实例不相同...."<<endl;
}

//void foo()
//{
//	static int a;
//	//static A aa(2);
//	static A aa;
//	cout<<a<<"         "<<endl;
//}
class ZZTest
{
private:
	static ZZTest& instance;
	static void use(ZZTest& instance){
		cout<<(&instance)<<endl;
		cout<<"zz"<<endl;
	};
public:
	static ZZTest& getInstance()
	{
		static  ZZTest zz;
		use(instance);
		return zz;
	}
};

 //ZZTest& ZZTest::instance = ZZTest::getInstance();
int _tmain(int argc, _TCHAR* argv[])
{
//foo();
	////普通测试
	SingletonCommon* singleC = SingletonCommon::getInstance();
	SingletonCommon* singleC1 = SingletonCommon::getInstance();
	test<SingletonCommon>(singleC,singleC1);

	//double* a = new double[5120*5120];


	//SingletonCommon singleC2(*singleC1);
	//SingletonCommon singleC3 = (*singleC);


	//test<SingletonCommon>(&singleC2,singleC1);
	//test<SingletonCommon>(singleC,&singleC3);
	//test<SingletonCommon>(&singleC2,&singleC3);

	////XX测试
	//SingletonXX* singleX = SingletonXX::getInstance();
	//SingletonXX* singleX1= SingletonXX::getInstance();
	//test<SingletonXX>(singleX,singleX1);

	////文艺测试
	//SingletonArtistic* singleA = SingletonArtistic::getInstance();
	//SingletonArtistic* singleA1 = SingletonArtistic::getInstance();
	//test<SingletonArtistic>(singleA,singleA1);

	////改进文艺测试
	//SingletonArtisticPlus* singleAP= SingletonArtisticPlus::getInstance();
	//SingletonArtisticPlus* singleAP1= SingletonArtisticPlus::getInstance();
	//test<SingletonArtisticPlus>(singleAP,singleAP1);

	//Boost 1版Singleton测试
	//A &inA = singleton<A>::instance();
	//A &inA1 = singleton<A>::instance();
	//test<A>(&inA,&inA1);

	//Boost 2版Singleton测试
	//A &inA = singleton<A>::get_instance();
	//A &inA1 = singleton<A>::get_instance();
	//test<A>(&inA,&inA1);
	
	////登记式单例
	//QQSingleton* qq =QQSingleton::getInstance();

	//string num1("100");
	//QQSingleton* qq1 =QQSingleton::getInstance(num1);

	//string num2("200");
	//QQSingleton* qq2 =QQSingleton::getInstance(num2);

	//string num3("100");
	//QQSingleton* qq3 =QQSingleton::getInstance(num3);

	//map<string,QQSingleton*> landmap = QQSingleton::getQQLandMap();

	//map<string,QQSingleton*>::iterator map_it = landmap.begin();
	//for (;map_it!=landmap.end();map_it++)
	//{
	//	cout<<map_it->first.c_str()<<endl;
	//}
	return 0;
}

