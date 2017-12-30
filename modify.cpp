#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
	vector<int> vec = {9, 60, 70, 8, 45, 87, 90};
	vector<int> vec2 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	//copy
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	
	//fill(vec2.begin(), vec2.end(), 0);
	
	cout << endl;
	
	copy_if(vec.begin(), vec.end(), 
			ostream_iterator<int>(cout, " "),
			[](int x){return x > 80;});	
			
	cout << endl;		
	
	copy_n(vec.begin(), 4, ostream_iterator<int>(cout, " "));
	
	cout << endl;	
	
	copy_backward(vec.begin(), vec.end(), vec2.end());
	copy(vec2.begin(), vec2.end(), ostream_iterator<int>(cout, " "));
	
	cout << endl;
	
	//move
	
	fill(vec2.begin(), vec2.end(), 0);
	move(vec.begin(), vec.end(), vec2.begin());
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	copy(vec2.begin(), vec2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	fill(vec2.begin(), vec2.end(), 0);
	
	move_backward(vec.begin(), vec.end(), vec2.end());
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	copy(vec2.begin(), vec2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	return 0;
}

