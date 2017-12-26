#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> vec;
	vec.push_back(4);
	vec.push_back(1);
	vec.push_back(8);
	
	vector<int>::iterator start = vec.begin();
	vector<int>::iterator stop = vec.end();
	
	for(vector<int>::iterator move = start; move != stop; ++move){
		cout << *move << endl;
	}
	
	sort(start, stop);
	
	for(vector<int>::iterator move = start; move != stop; ++move){
		cout << *move << endl;
	}
	
	return 0;
}
