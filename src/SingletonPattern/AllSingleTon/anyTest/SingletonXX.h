//XX Singleton
class SingletonXX
{
private:
	static SingletonXX* instanceSingletonXX;
	SingletonXX()
	{
		cout<<"XX ����!"<<endl;
	};
public:
	~SingletonXX()
	{
		cout<<"XX����!"<<endl;
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
				cout<<"�����ڲ�����������!"<<endl;
				delete instanceSingletonXX;
				instanceSingletonXX = NULL;
			}
		}
	};
	static InnerXX innerInstance;
};

SingletonXX* SingletonXX::instanceSingletonXX = NULL;
SingletonXX::InnerXX SingletonXX::innerInstance;
