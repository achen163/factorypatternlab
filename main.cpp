#include "factory.hpp"


int main(int argc, char** argv) {
	Factory* f = new Factory();
	cout << f->parser(argc, argv)->evaluate() << endl;
return 0;
}


