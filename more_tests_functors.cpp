#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <functional>

using namespace std;

class AddValue{
	int val;
public:
	AddValue(int j):val(j){}
	void operator()(int &i){
		i += val;
	}
};

void add(int & i, int val){
	i += val;
}

int main(){
	vector <int> vec = {1, 2, 3, 4, 5, 89, 9, 10};
	
	copy(vec.begin(), vec.end(),
		ostream_iterator<int>(cout, "\t"));	
		
	for_each(vec.begin(), vec.end(), 
			 bind(add, placeholders::_1, 8));
			 
	cout << endl;
	copy(vec.begin(), vec.end(),
		ostream_iterator<int>(cout, "\t"));	
		
	//transform into functions
	
	//built in functors
	
	/*
	less 
	greater
	greater equal
	less equal
	not equal to
	logical and
	logical not
	logical or
	multiplies
	minus
	plus
	divide
	modulus
	negate
	*/
}
