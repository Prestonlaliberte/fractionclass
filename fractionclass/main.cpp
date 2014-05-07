/* Used for testing the Fraction Class
*/

#include "Fraction.h"

int main(){
	Fraction f(3,4);
	Fraction g(5,2);
	Fraction h=f.plus(g);
	cout << "h=";
	h.print(cout);
	cout << endl;
	return 0;
}
