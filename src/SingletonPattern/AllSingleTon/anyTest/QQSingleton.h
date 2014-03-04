#include "stdafx.h"
//�Ǽ�ʽ����
class QQSingleton
{
private:
	QQSingleton(string qqNumber)
	{
		this->qqNumber = qqNumber;
	}
	~QQSingleton()
	{
		map<string,QQSingleton*>::iterator map_it = qqLandMap.begin();
		for (;map_it!=qqLandMap.end();map_it++)
		{
			delete map_it->second;
		}
		qqLandMap.clear();
		map<string,QQSingleton*>().swap(this->qqLandMap);
	}
public:
	static  map<string,QQSingleton*>& getQQLandMap()
	{
		return qqLandMap;
	};
	static QQSingleton* getInstance(string qqNumber="")
	{
		if (qqNumber.empty())
		{
			cout<<"QQ��δ����,����Ĭ��QQ88888��¼"<<endl;
			qqNumber = "88888";//Ĭ�ϵ�¼QQ��
		}
		if (!qqLandMap.count(qqNumber))
		{
			cout<<qqNumber.c_str()<<"δ��¼...��ʼ��������...."<<endl;
			//cout<<qqNumber.c_str()<<"��¼�ɹ�!"<<endl;
			//QQSingleton* tempQQ = new QQSingleton(qqNumber);
			qqLandMap[qqNumber] = new QQSingleton(qqNumber);;
			//delete tempQQ;
			cout<<qqNumber.c_str()<<"��¼�ɹ�!"<<endl;
		}
		else
			cout<<qqNumber.c_str()<<"�Ѿ���¼,�����ظ���¼!"<<endl;

		return qqLandMap[qqNumber];
	};
private:
	bool isQQLand(string qqNumber)
	{
			if(qqLandMap.count(qqNumber))
				return true;
			return false;
	};
private:
	string qqNumber;
	static map<string,QQSingleton*> qqLandMap;
};

map<string,QQSingleton*> QQSingleton:: qqLandMap;
