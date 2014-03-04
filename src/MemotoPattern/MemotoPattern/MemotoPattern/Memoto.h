#pragma once

class CMemoto;
class COrgnizer
{
public:
	void setState(string state);
	string getState();
	CMemoto*  createMemoto();
	void restoreAllState(CMemoto* memoto);
protected:
private:
	string state;

};
class CMemoto
{
public:
	CMemoto(string state);
	virtual ~CMemoto(void);

	string getState();
private:
	string state;
};
class CManager
{
public:	
	CMemoto* getMemoto();
	void setMemoto(CMemoto* memoto);
private:
	CMemoto* memoto;
};