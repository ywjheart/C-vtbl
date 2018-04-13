#pragma once

#include <iostream>
#define LOG_FUNCTION() {std::cout << __FUNCTION__ << std::endl;}

class TestInterface
{
public:
	virtual ~TestInterface(){}

	virtual auto Ops1() ->void = 0;
	virtual auto Ops2() ->void = 0;
	virtual auto Ops3() ->void = 0;
	virtual auto Ops4() ->void = 0;
};


class TestInterface2
{
public:
	virtual ~TestInterface2(){}

	virtual auto Ops1() ->void = 0;
	virtual auto Ops2() ->void = 0;
	virtual auto Ops4() ->void = 0;
	virtual auto Ops2(int x) ->void = 0;
};



class TestImpl :
	public TestInterface
{
public:
	virtual ~TestImpl(){}

	virtual auto Ops1() ->void override{ LOG_FUNCTION(); }
	virtual auto Ops2() ->void override{ LOG_FUNCTION(); }
	virtual auto Ops3() ->void override{ LOG_FUNCTION(); }
	virtual auto Ops4() ->void override{ LOG_FUNCTION(); }
};


class TestImpl2 :
	public TestInterface2
{
public:
	virtual ~TestImpl2(){}

	virtual auto Ops1() ->void override{ LOG_FUNCTION(); }
	virtual auto Ops2() ->void override{ LOG_FUNCTION(); }
	virtual auto Ops4() ->void override{ LOG_FUNCTION(); }
	virtual auto Ops2(int x) ->void override{ LOG_FUNCTION(); }
};