#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base {
	public:
		Mult(Base* A, Base* B) : Base() { this->A = A; this->B = B; }
		virtual double evaluate() { return (A->evaluate()*B->evaluate()); }
		virtual string stringify() { return A->stringify()  + " * " + B->stringify(); }
	private:
		Base* A; Base* B;
};
#endif
