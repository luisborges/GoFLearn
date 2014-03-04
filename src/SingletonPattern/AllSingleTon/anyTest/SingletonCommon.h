//��ͨSingleton
#define BOOST_DATE_TIME_SOURCE
#define BOOST_THREAD_NO_LIB
#include <boost/thread.hpp>
using namespace boost;

class SingletonCommon
{
private:
	static mutex mu;
	static SingletonCommon* instanceSingletonCommon;
	SingletonCommon()
	{
		cout<<"��ͨ ����!"<<endl;
	};
	SingletonCommon(const SingletonCommon&)
	{
		cout<<"���� ����!"<<endl;
	};
	SingletonCommon& operator=(const SingletonCommon& tem)
	{
		cout<<"��ֵ ����!"<<endl;
	};
public:
	~SingletonCommon()
	{
		cout<<"��ͨ ����!"<<endl;
	};
	//����ʽ�ص�:
	//1.���贴��
	//2. �̲߳���ȫ
	//3.��Ҫ�ֶ��ͷ�?
	static SingletonCommon* getInstance()
	{
		//if (instanceSingletonCommon==NULL)
		{	
			//mutex::scoped_lock lock(mu);
			if (instanceSingletonCommon==NULL)
				instanceSingletonCommon = new SingletonCommon();
		}
		return instanceSingletonCommon;
	};
};

mutex SingletonCommon::mu;
SingletonCommon* SingletonCommon::instanceSingletonCommon = NULL;//��׼����ʽ