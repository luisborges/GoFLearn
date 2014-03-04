#pragma once

class CCommandline;
class CCommandInovoker
{
public:
	void setCommand(CCommandline* commandline);
	void excuteCommand();
private:
	CCommandline* commandline;
};

class CCommandReceiver
{
public:
	void excuteCommand();
};
class CCommandline
{
public:
	CCommandline(void);
	virtual ~CCommandline(void);

	virtual void setCommandReceiver(CCommandReceiver* commandReceiver) = 0;
	virtual void excuteCommand() = 0;
protected:
	CCommandReceiver* commandReceiver;
};

class CConcreteCommand:public CCommandline
{
public:
	void setCommandReceiver(CCommandReceiver* commandReceiver);
	void excuteCommand();
};


