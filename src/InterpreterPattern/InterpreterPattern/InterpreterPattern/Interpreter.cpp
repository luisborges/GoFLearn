#include "stdafx.h"
#include "Interpreter.h"

Context::Context(string& text)
{
	this->text = text;
}

Context::~Context()
{

}

string Context::getValue()
{
	return this->text;
}
CInterpreter::CInterpreter(void)
{
}

CInterpreter::~CInterpreter(void)
{
}
varInterprete::varInterprete(Context* context)
{
	this->context = context;
}
int varInterprete::interprete(map<string,int>* context)
{
	map<string,int>::iterator it = context->find(this->context->getValue());
	int result = 0;
	if (it!=context->end())
		result = it->second;
	return result;
}
addInterprete::addInterprete(CInterpreter* left, CInterpreter* right)
{
	this->left = left;
	this->right = right;
}

int addInterprete::interprete(map<string,int>* context)
{
	return this->left->interprete(context) + this->right->interprete(context);

}

subInterprete::subInterprete(CInterpreter* left, CInterpreter* right)
{
	this->left = left;
	this->right = right;
}

int subInterprete::interprete(map<string,int>* context)
{
	return this->left->interprete(context) - this->right->interprete(context);
}

Calculator::Calculator()
{
	str_val_map = new map<string,int>();
}
Calculator::~Calculator()
{
	if (str_val_map)
	{
		delete str_val_map;
		str_val_map = NULL;
	}
}

void Calculator::getValMap(Context* context)
{
	//str_val_map.find()
	stack <CInterpreter*>* expStack = new stack<CInterpreter*>();
	CInterpreter* left = NULL;
	CInterpreter* right = NULL;
	string strTemp = context->getValue();
	for (int i = 0;i<strTemp.length();++i)
	{
		string subTemp = strTemp.substr(i,1);
		
			if (subTemp=="+")
			{
				left = expStack->top();
				expStack->pop();
			
				Context* cont = new Context(strTemp.substr(++i,1));
				right = new varInterprete(cont);

				CInterpreter * varExp = new addInterprete(left,right);
				expStack->push(varExp);
			}
			else if (subTemp=="-")
			{
				left = expStack->top();
				expStack->pop();

				Context* cont = new Context(strTemp.substr(++i,1));
				right = new varInterprete(cont);

				CInterpreter * varExp = new subInterprete(left,right);
				expStack->push(varExp);
			}
			else
			{
				Context* cont = new Context(subTemp);
				CInterpreter * varExp = new varInterprete(cont);
				expStack->push(varExp);
			}
	}
	this->interpreter = expStack->top();
	expStack->pop();


	for (int i = 0;i<strTemp.length();++i)
	{
		string subTemp = strTemp.substr(i,1);
		if (subTemp!="+"&&subTemp!="-")
		{
			if (!str_val_map->count(subTemp))
			{
				cout<<"Please Input the value of "<<subTemp.c_str()<<endl;
				int val;
				cin>>val;
				str_val_map->insert(make_pair(subTemp,val));
			}
		}
	}
}

int Calculator::calValue(Context* context)
{
	getValMap(context);
	int result = this->interpreter->interprete(str_val_map);
	return result;
}