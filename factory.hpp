#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__
#include "base.hpp"
#include <boost/tokenizer.hpp>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
using namespace std; 

class Factory : public Base {
	public:
		Base* createAdd(Base*, Base*);
		Base* createSub(Base*, Base*);
		Base* createMult(Base*, Base*);
		Base* createDiv(Base*, Base*);
		
		Base* parse(string);
		void execute(Base*);
	private:
		Base* root;
		Base* left;
};
#endif
