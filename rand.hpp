
#ifndef _RAND_HPP_
#define _RAND_HPP_

#include "base.hpp"
#include <iostream>
#include <string>

using namespace std;


class Rand : public Base {

	public:
	Rand() : Base () {
	numval = rand() % 100;
	strval = to_string(numval)
	
}

	virtual double evaluate () { return num }
	virtual string stringify() { return strval }

	
	private:
	double numval;
	string strval;

};


#endif

