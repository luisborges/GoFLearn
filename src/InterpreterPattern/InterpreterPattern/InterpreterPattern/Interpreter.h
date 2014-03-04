
class Context
{
public:
	Context(string& text);
	~Context();

	string getValue();
protected:
	string text;
private:
};
class CInterpreter
{
public:
	CInterpreter(void);
	virtual ~CInterpreter(void);

	virtual int interprete(map<string,int>* context)=0;
};

class varInterprete:public CInterpreter
{
public:
	varInterprete(Context* context);
	int interprete(map<string,int>* context);
private:
	Context* context;
};

class sysbolExpression:public CInterpreter
{
protected:
	CInterpreter* left;
	CInterpreter* right;
public:
	virtual int interprete(map<string,int>* context)=0;

};

class addInterprete:public sysbolExpression
{
public:
		addInterprete(CInterpreter* left, CInterpreter* right);
		int  interprete(map<string,int>* context);
protected:
};

class subInterprete:public sysbolExpression
{
public:
	subInterprete(CInterpreter* left, CInterpreter* right);
	int interprete(map<string,int>* context);
};

class Calculator
{
public:
	Calculator();
	~Calculator();

	void getValMap(Context* context);
	int calValue(Context* context);
private:
	CInterpreter* interpreter;
	map<string,int>* str_val_map;
};