// CompositePattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Composite.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CComponent *composite = new CComposite("我的电脑");

	CComponent *composite1 = new CComposite("D盘:");
	CComponent *composite2 = new CComposite("E盘");

	CComponent *composite11= new CComposite("D:\\语言");
	CComponent *composite12= new CComposite("D:\\书籍");

	CComponent *leaf11 = new CLeaf("C++ Primer");
	CComponent *leaf12= new CLeaf("设计模式指南");

	CComponent *composite21= new CComposite("E:\\软件");
	CComponent *leaf2 = new CLeaf("code::blocks");

	composite->addItem(composite1);
	composite->addItem(composite2);

	composite1->addItem(composite11);
	composite1->addItem(composite12);

	composite11->addItem(leaf11);
	composite12->addItem(leaf12);

	composite2->addItem(composite21);
	composite21->addItem(leaf2);

	composite->operation();


	return 0;
}

