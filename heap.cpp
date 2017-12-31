#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	vector<int> vec = {1, 2, 3,4, 5, 6 , 20, 2, 3};
	make_heap(vec.begin(), vec.end());
	
	//remove the largest element
	pop_heap(vec.begin(), vec.end());
	int largest = vec.back();
	vec.pop_back();
	
	cout << "largest item: " << largest;
	
	
	
	return 0;
}
