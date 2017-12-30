#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

/*
	count, min and max, compare, linear search, attribute
*/


int main(){
	//couting!!
	pair<vector<int>::iterator, vector<int>::iterator> itrs;
	vector<int> nums = {1,1, 1, 2,3, 45, 6, 67, 9, 10};
	
	int num = count(nums.begin(), nums.end(), 2);	
	
	auto itr = max_element(nums.begin(), nums.end(),
					 	   less<int>());
	
	cout << *itr << endl;	
	
	itr = min_element(nums.begin(), nums.end(),
					 	   less<int>());
	
	cout << *itr << endl;
	
	itrs = minmax_element(nums.begin(), nums.end(), less<int>());
	
	
	copy(itrs.first, itrs.second + 1, ostream_iterator<int>(cout, "\n"));
	
	//searching LINEAR
	itr = find(nums.begin(), nums.end(), 55);
	
	//finds the first
	itr = find_if(nums.begin(), nums.end(), [](int x){ return x > 45;});
	
	cout << "the first number greater than 80 is: " << *itr << endl;
	
	itr = find_if_not(nums.begin(), nums.end(), [](int x){ return x > 45;});

	cout << "the first number not bigger than 80 is: " << *itr << endl;
	
	//find consecutive
	cout << "The consecutive ones: " << endl;
	itr = search_n(nums.begin(), nums.end(), 3, 1);
	
	copy(itr, itr + 3, ostream_iterator<int>(cout, "\n"));
	
	//subrange
	vector<int> sub = {1, 2, 3};
	itr = search(nums.begin(), nums.end(), sub.begin(), sub.end());
		//find_end used to find the last subrange that matches this pattern
	//find subrange
	cout << "The 1 2 3! found: " << endl;	
	copy(itr, itr + 3, ostream_iterator<int>(cout, "\n"));
	
	//partial subrange
	
	//find_first of
	
	//find adjacnet subrange
	
	//adjacent
	
	//eaul
	
	//permutation
	
	//mismatch
	
	//lexiographical compare
	
	//attributes	
	
	bool predicate = all_of(nums.begin(), nums.end(), [](int x){return x > 80;});
	cout << predicate << endl;
	predicate = any_of(nums.begin(), nums.end(), [](int x){return x > 80;});
	cout << predicate << endl;
	predicate = none_of(nums.begin(), nums.end(), [](int x){return x > 80;});
	cout << predicate << endl;
	
	return 0;
}
