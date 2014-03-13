// ClassAndConstructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Name
{
	const char* s;
};

class Table
{
	Name* p;
	size_t sz;
public:
	Table(size_t s=15) //Constructor
	{
		sz = s;
		p = new Name[sz];
	}
	Table(const Table& t) //Copy constructor
	{
		sz = t.sz;
		p = new Name[sz];
		for(int i = 0; i< sz; i++) p[i] = t.p[i];
	}
	Table& operator= (const Table& t) //Assignment operator
	{
		if(this != &t) //Beware of self assignment t = t
		{
			delete[] p;
			p = new Name[sz=t.sz];
			for(int i = 0; i< sz; i++)
				p[i]= t.p[i];
		}
		return *this;

	}
	~Table()  //Destructor
	{
		delete[] p;
	}
	Name* lookup(const char*);
	bool insert(Name*);
};



int _tmain(int argc, _TCHAR* argv[])
{
	cout<<"Size of Name Class: "<<sizeof(Name)<<'\n';
	cout<<"Size of Table Class: "<<sizeof(Table)<<'\n';

	return 0;
}

