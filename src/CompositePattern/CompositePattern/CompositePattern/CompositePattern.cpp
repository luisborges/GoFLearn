// CompositePattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Composite.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CComponent *composite = new CComposite("�ҵĵ���");

	CComponent *composite1 = new CComposite("D��:");
	CComponent *composite2 = new CComposite("E��");

	CComponent *composite11= new CComposite("D:\\����");
	CComponent *composite12= new CComposite("D:\\�鼮");

	CComponent *leaf11 = new CLeaf("C++ Primer");
	CComponent *leaf12= new CLeaf("���ģʽָ��");

	CComponent *composite21= new CComposite("E:\\���");
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

