#include "stdafx.h"
//�Ľ������հ�
class SingletonArtisticPlus
{
private:
	SingletonArtisticPlus()
	{
		cout<<"�Ľ������� ����!"<<endl;
	};
public:
	~SingletonArtisticPlus()
	{
		cout<<"�Ľ������� ����!"<<endl;
	};
	//�ص�:
	//��Ҫʱ����,�̰߳�ȫ(g++��ȫ,��һ��������Ĭ�Ϲ��캯��)
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


