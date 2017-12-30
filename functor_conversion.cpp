//functor converstion
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <functional>
#include <set>
#include <deque>

using namespace std;

double Pow(double x, double y){
	return pow(x, y);
}

int main(){
	set<int, greater<int>> myset = {3, 1, 25, 7, 12};
	deque<int> d;
	
	auto f = function<double (double, double)>(Pow);
	transform(myset.begin(), myset.end(),
			 back_inserter(d),
			 bind(f, placeholders::_1, 2));
	copy(
		d.begin(),
		d.end(),
		ostream_iterator<int>(cout, " ")
	);
	
	//could also use a predicate. The information is used to determine wheather
	//this should be taken or not.
	
	//PREDIATE
	//you can use it wiht transform
}
