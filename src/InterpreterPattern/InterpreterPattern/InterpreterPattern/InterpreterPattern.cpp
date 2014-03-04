// InterpreterPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Interpreter.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//string strTemp = "Name: zhongzhong";
	//string str = strTemp.substr(0,1);
	//cout<<str.c_str()<<endl;

	string formula ;
	cout << "Enter a formula (use <Enter> as the delimiter): ";
	getline(cin,formula);
	cout << "You entered: " << formula.c_str() << endl;;

	Context* context = new Context(formula);
	Calculator* calculator = new Calculator();
	int result = calculator->calValue(context);
	cout<<"¼ÆËã½á¹û: "<<context->getValue().c_str()<<"="<<result<<endl;

	delete calculator;
	calculator = NULL;
	delete context;
	context = NULL;
	return 0;
}

