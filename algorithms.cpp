//algorithms are mainly loops, whever you see loops in your code,
//think about chainging them to use algoritm library
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

/*

for each, find if

*/

int main(){
	vector<int> vec = {4, 2, 5, 1, 3, 9};
	vector<int>::iterator itr = min_element(vec.begin(), vec.end());
	
	copy(vec.begin(), vec.end(),
	ostream_iterator<int>(cout, " "));
	
	sort(vec.begin(), itr);
	
	copy(vec.begin(), vec.end(),
	ostream_iterator<int>(cout, " "));
	
	//insert iterator does iterating not copying, it is not effecient
	
}
