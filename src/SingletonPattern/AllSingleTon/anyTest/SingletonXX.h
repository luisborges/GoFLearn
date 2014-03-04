//XX Singleton
class SingletonXX
{
private:
	static SingletonXX* instanceSingletonXX;
	SingletonXX()
	{
		cout<<"XX 构造!"<<endl;
	};
public:
	~SingletonXX()
	{
		cout<<"XX析构!"<<endl;
	};
	static SingletonXX* getInstance()
	{
		if (instanceSingletonXX==NULL)
		{
			instanceSingletonXX = new SingletonXX();
		}
		return instanceSingletonXX;
	};

	class InnerXX
	{
	public:
		~InnerXX()
		{
			if (instanceSingletonXX!=NULL)
			{
				cout<<"运行内部类析构函数!"<<endl;
				delete instanceSingletonXX;
				instanceSingletonXX = NULL;
			}
		}
	};
	static InnerXX innerInstance;
};

SingletonXX* SingletonXX::instanceSingletonXX = NULL;
SingletonXX::InnerXX SingletonXX::innerInstance;
