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
		cout<<"���Ե�����ʵ����ͬ!"<<endl;
	else
		cout<<"���Ե�����ʵ������ͬ...."<<endl;
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
	////��ͨ����
	SingletonCommon* singleC = SingletonCommon::getInstance();
	SingletonCommon* singleC1 = SingletonCommon::getInstance();
	test<SingletonCommon>(singleC,singleC1);

	//double* a = new double[5120*5120];


	//SingletonCommon singleC2(*singleC1);
	//SingletonCommon singleC3 = (*singleC);


	//test<SingletonCommon>(&singleC2,singleC1);
	//test<SingletonCommon>(singleC,&singleC3);
	//test<SingletonCommon>(&singleC2,&singleC3);

	////XX����
	//SingletonXX* singleX = SingletonXX::getInstance();
	//SingletonXX* singleX1= SingletonXX::getInstance();
	//test<SingletonXX>(singleX,singleX1);

	////���ղ���
	//SingletonArtistic* singleA = SingletonArtistic::getInstance();
	//SingletonArtistic* singleA1 = SingletonArtistic::getInstance();
	//test<SingletonArtistic>(singleA,singleA1);

	////�Ľ����ղ���
	//SingletonArtisticPlus* singleAP= SingletonArtisticPlus::getInstance();
	//SingletonArtisticPlus* singleAP1= SingletonArtisticPlus::getInstance();
	//test<SingletonArtisticPlus>(singleAP,singleAP1);

	//Boost 1��Singleton����
	//A &inA = singleton<A>::instance();
	//A &inA1 = singleton<A>::instance();
	//test<A>(&inA,&inA1);

	//Boost 2��Singleton����
	//A &inA = singleton<A>::get_instance();
	//A &inA1 = singleton<A>::get_instance();
	//test<A>(&inA,&inA1);
	
	////�Ǽ�ʽ����
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

