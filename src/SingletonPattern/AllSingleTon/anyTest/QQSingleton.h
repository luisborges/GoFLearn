#include "stdafx.h"
//登记式单例
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
			cout<<"QQ号未输入,采用默认QQ88888登录"<<endl;
			qqNumber = "88888";//默认登录QQ号
		}
		if (!qqLandMap.count(qqNumber))
		{
			cout<<qqNumber.c_str()<<"未登录...开始建立连接...."<<endl;
			//cout<<qqNumber.c_str()<<"登录成功!"<<endl;
			//QQSingleton* tempQQ = new QQSingleton(qqNumber);
			qqLandMap[qqNumber] = new QQSingleton(qqNumber);;
			//delete tempQQ;
			cout<<qqNumber.c_str()<<"登录成功!"<<endl;
		}
		else
			cout<<qqNumber.c_str()<<"已经登录,请勿重复登录!"<<endl;

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
