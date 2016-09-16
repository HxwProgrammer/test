//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <string>
#include <unistd.h>
#include <pthread.h>
using namespace std;

using namespace std;
class A{
public:
	A(){

	}
	virtual ~A(){}
	virtual void foo(){
		cout << "A::foo()" << endl;
	}
};

class B{
public:
	B(){

	}
	virtual ~B(){

	}
	virtual void fun(){
		cout << "B::fun()" << endl;
	}
};


class C:public A, public B{
public:
	C(){

	}
	void foo(){
		cout << "C::foo()" << endl;
	}
	void fun(){
		cout << "C::fun" << endl;
	}
};


int main(void){
	A* a = new C();
	a->foo();
	B* b = dynamic_cast<B*>(a);
	b->fun();
	cout << "dynamic_cast<>" << endl;
	return 0;
}
