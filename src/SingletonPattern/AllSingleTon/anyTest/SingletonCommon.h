//普通Singleton
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
		cout<<"普通 构造!"<<endl;
	};
	SingletonCommon(const SingletonCommon&)
	{
		cout<<"拷贝 构造!"<<endl;
	};
	SingletonCommon& operator=(const SingletonCommon& tem)
	{
		cout<<"赋值 构造!"<<endl;
	};
public:
	~SingletonCommon()
	{
		cout<<"普通 析构!"<<endl;
	};
	//懒汉式特点:
	//1.按需创建
	//2. 线程不安全
	//3.需要手动释放?
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
SingletonCommon* SingletonCommon::instanceSingletonCommon = NULL;//标准懒汉式