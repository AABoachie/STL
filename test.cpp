#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main(){
	vector<int> nums = {1, 2, 43, 4, 67, 9, 98};	
	int m = count_if(nums.begin(), nums.end(), std::bind2nd(std::less_equal<int>(),100));
	
	vector<int> lessthan;	
	copy_if(istream_iterator<int>(cin), istream_iterator<int>(), 
		    back_inserter(lessthan),
		 	std::bind2nd(std::less_equal<int>(),100));
	
	cout << "numbers less than 100: ";
	copy(lessthan.begin(), 
		 lessthan.end(),
		 ostream_iterator<int>(cout, " "));
	
	return 0;
}
