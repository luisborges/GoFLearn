#include "stdafx.h"
//改进的文艺版
class SingletonArtisticPlus
{
private:
	SingletonArtisticPlus()
	{
		cout<<"改进版文艺 构造!"<<endl;
	};
public:
	~SingletonArtisticPlus()
	{
		cout<<"改进版文艺 析构!"<<endl;
	};
	//特点:
	//需要时创建,线程安全(g++安全,有一个加锁的默认构造函数)
	static SingletonArtisticPlus* getInstance()
	{
		static SingletonArtisticPlus instanceSingletonArtisticPlus;
		doSomething();
		return &instanceSingletonArtisticPlus;
	};
	static void doSomething()
	{
		cout<<"Do something!"<<endl;
	};
};


