#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__
#include "base.hpp"
class Factory : public Base {
	public:
		Base* createAdd();
		Base* createSub();
		Base* createMult();
		Base* createDiv();
		Base* createPow();
		
		void parse();
	private:
		Base* root;
};
#endif
