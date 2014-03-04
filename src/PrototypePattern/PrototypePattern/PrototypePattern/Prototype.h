#pragma once

class CSubInfo
{
public:
	CSubInfo()
	{
		this->sex = "";
		this->age = 0;
	}
	CSubInfo* cloneObject()
	{
		//深度复制
		CSubInfo* temp = new CSubInfo();
		temp->setInfo(this->sex,this->age);
		return temp;

		////浅复制
		//returen this;
	};
	void setInfo(string sex,int age)
	{
		this->age =age;
		this->sex = sex;
	};

	string getSex()
	{
		return this->sex;
	}
	int getAge()
	{
		return this->age;
	}

private:
	string sex;
	int age;

};
class CPrototype
{
public:
	CPrototype(string name)
	{
		this->name = name;
		this->subInfo = new CSubInfo();
	};
	~CPrototype()
	{
		if (this->subInfo!=NULL)
		{
			delete this->subInfo;
			this->subInfo = NULL;
		}
	};
	CPrototype* cloneObject()
	{
		//深度复制
		CPrototype* cp = new CPrototype(this->subInfo->cloneObject());
		cp->name = name;
		return cp;

		////浅复制
		//return this;
	};

	void setInfo(string sex,int age)
	{
		this->subInfo->setInfo(sex,age);
	};
	void display()
	{
		cout<<name.c_str()<<"  "<<this->subInfo->getSex().c_str()<<"  "<<this->subInfo->getAge()<<endl;
	};
private:
	CPrototype(CSubInfo* subInfo){this->subInfo = subInfo->cloneObject();};
private:
	string name;
	CSubInfo* subInfo;
};
