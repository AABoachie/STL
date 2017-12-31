#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

bool lsb_less(int x, int y){
	return (x%10) < (y%10);
}
	
int main(){
	vector<int> vec = {9, 1, 10, 2, 45, 90, 4, 9, 5, 8};	
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));	

	cout << endl;
	
	//sorts the first 5 
	partial_sort(vec.begin(), vec.begin() + 5, vec.end(), less<int>());
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	
	cout << endl;
	
	//nth_elemenmt, it gets the students but they are not sorted.
	partition(vec.begin(), vec.end(), [](int x){return x < 10;});
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	
	//also have stability preserved
	
	return 0;
}
