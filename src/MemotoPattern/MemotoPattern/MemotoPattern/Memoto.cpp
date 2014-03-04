#include "StdAfx.h"
#include "Memoto.h"


void COrgnizer::setState(string state)
{
	this->state = state;
}
string COrgnizer::getState()
{
	return this->state;
}
CMemoto* COrgnizer::createMemoto()
{
	return new CMemoto(state);
}

void COrgnizer::restoreAllState(CMemoto* memoto)
{
	this->state = memoto->getState();
}

CMemoto::CMemoto(string state)
{
	this->state = state;
}

CMemoto::~CMemoto(void)
{
}

string CMemoto::getState()
{
	return this->state;
}

void CManager::setMemoto(CMemoto* memoto)
{
	this->memoto = memoto;
}

CMemoto* CManager::getMemoto()
{
	return this->memoto;
}