//文艺Singleton
class SingletonArtistic
{
private:
	static SingletonArtistic instanceSingletonArtistic;
	SingletonArtistic()
	{
		cout<<"文艺 构造!"<<endl;
	};
public:
	~SingletonArtistic()
	{
		cout<<"文艺 析构!"<<endl;
	};
	//饿汉式特点:
	//1. 线程安全
	//2.无需手动释放空间
	//3.可能造成资源浪费
	static SingletonArtistic* getInstance()
	{
		return &instanceSingletonArtistic;
	};
};

SingletonArtistic SingletonArtistic::instanceSingletonArtistic ;//饿汉
