#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
	//min element
	vector<int> elems = {1, 2, 345, 3, 7, 0, 6};	
	
	copy(elems.begin(), elems.end(),
		ostream_iterator<int>(cout, "\n"));
	
	auto itr = max_element(elems.begin(), elems.end());
	
	cout << "largest" << endl << *itr << endl;
	
	itr = min_element(elems.begin(), elems.end());
	
	cout << "smallest" << endl << *itr << endl;
	
	cout << "sorted until min element:\n";
	sort(elems.begin(), itr);
	copy(elems.begin(), elems.end(),
		ostream_iterator<int>(cout, "\n"));
		
	return 0;
}
