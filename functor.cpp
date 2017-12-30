//functor
#include <iostream>
using namespace std;

class X{
	public: 
	void operator()(string str){
		cout << "Calling functor X with parameter " << str << endl;
	}
	operator string() const { //type converstion function
		return "X";
	}
};


/*
	Parameterized fucntion
*/
class Y{
	int i;
public:
	Y(int i):i(i){}
	void operator()(string str){
		cout << "Calling function with " << str << " parametered with " << i << endl;
	}
};

int main(){
	Y(8)("YO");
	return 0;
}
