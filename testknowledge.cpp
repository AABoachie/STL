#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

void times(int & num){
	num *= 2;
}

int main(){
	vector<string> vec;
	vector<int> nums = {1, 2, 3, 4, 5};
	/*
	copy(istream_iterator<string>(cin), istream_iterator<string>(), 
		 back_inserter(vec));		 
		 
	copy(vec.begin(), vec.end(),
		 ostream_iterator<string>(cout, " "));
	*/
	
	
	for_each(nums.begin(), nums.end(), 
			 times);
			 
	copy(nums.begin(), nums.end(), 
		ostream_iterator<int>(cout, " "));
	
	return 0;
}
