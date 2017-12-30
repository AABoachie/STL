#include <iostream>
#include <algorithm>

using namespace std;

bool isOdd(int num){
	return num % 2 == 0;
}

int main(){	
	vector<int> vec = {1, 2, 34, 5, 7, 8, 9, 0, 2};
	int num = count_if(vec.begin(), vec.end(), 
					   [](int x){ return x < 10; });
	
	cout << "There are " << num << " less than 10 in vec.";
	
	//use linear search when data is not sorted.
	vector<int>::iterator itr = find(vec.begin(), vec.end(), 34);
	
	advance(itr, 2);
	
	if(itr != vec.end())
		cout << " " << *(itr + 1);
		
	return 0;
}
