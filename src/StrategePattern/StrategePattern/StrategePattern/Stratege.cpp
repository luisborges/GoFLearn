#include "StdAfx.h"
#include "Stratege.h"

CStratege::CStratege(void)
{
}

CStratege::~CStratege(void)
{
}

void CStrategeA::stratege()
{
	cout<<"���ò���A"<<endl;
}

void CStrategeB::stratege()
{
	cout<<"���ò���B"<<endl;
}

CContext::CContext(CStratege* stratege)
{
	this->stratege = stratege;
}

CContext::~CContext()
{
	if (this->stratege)
	{
		delete this->stratege;
		this->stratege = NULL;
	}
}

void CContext::operation()
{
	if (this->stratege)
	{
		this->stratege->stratege();
	}
}