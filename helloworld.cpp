// StringManip.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include<iostream>

int main()
{
	std::string s;
	s = "cs106";
	std::string s2 = "Prafull";
	s.replace(0,1,s2);
	std::cout<<s<<std::endl;
	std::cout<<s2<<std::endl;
	std::string line;
	std::cin>>line;
	std::cout<<line<<std::endl;
	for (int i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);
	std::cout<<"String is :"<<s<<std::endl;
}
