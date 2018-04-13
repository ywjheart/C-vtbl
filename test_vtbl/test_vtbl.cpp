// test_vtbl.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "testinc.h"

#pragma check_stack(off) 
#pragma strict_gs_check(off )   

int _tmain(int argc, _TCHAR* argv[])
{
	{
		TestInterface* testobj = new TestImpl;

		testobj->Ops1();
		testobj->Ops2();
		testobj->Ops3();
		testobj->Ops4();

		delete testobj;
	}
	{
		TestInterface2* testobj = new TestImpl2;

		testobj->Ops1();
		testobj->Ops2();
		testobj->Ops2(11);
		testobj->Ops4();

		delete testobj;
	}
	return 0;
}

