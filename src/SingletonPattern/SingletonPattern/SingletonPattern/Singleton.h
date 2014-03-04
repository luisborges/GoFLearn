#pragma once

class CSingleton
{
public:
	static CSingleton* getInstance();

private:
	CSingleton(void);

	static CSingleton* instance;
};
