//����Singleton
class SingletonArtistic
{
private:
	static SingletonArtistic instanceSingletonArtistic;
	SingletonArtistic()
	{
		cout<<"���� ����!"<<endl;
	};
public:
	~SingletonArtistic()
	{
		cout<<"���� ����!"<<endl;
	};
	//����ʽ�ص�:
	//1. �̰߳�ȫ
	//2.�����ֶ��ͷſռ�
	//3.���������Դ�˷�
	static SingletonArtistic* getInstance()
	{
		return &instanceSingletonArtistic;
	};
};

SingletonArtistic SingletonArtistic::instanceSingletonArtistic ;//����
