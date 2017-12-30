//binding
#include <iostream>
#include <vector>
#include <set>
#include <functional>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
	set<int> myset = {2, 3, 4, 5};
	vector<int> vec;
	
	transform(myset.begin(), 
			 myset.end(),
			 back_inserter(vec),
			 bind(multiplies<int>(), placeholders::_1, 10));
	
	copy(vec.begin(), vec.end(),
	    ostream_iterator<int>(cout, " "));
	
	return 0;
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
