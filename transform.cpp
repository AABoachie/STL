#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){	
	vector<int> vec = {9, 60, 70, 8, 45, 87, 90};
	vector<int> vec2 = {9, 60, 70, 8, 45, 87, 90};
 	vector<int> vec3 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
 	vector<int> vec4 = {};
	
	transform(vec.begin(), vec.end(),
			  back_inserter(vec4),
			  [](int x){return x - 1;});
	
	transform(vec.begin(), vec.end(),
			  vec2.begin(),
			  vec3.begin(),
			  [](int x, int y){return x + y;});
			  
	copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
	
	
	//swap is a two way copy
	//fill, and genearte
	//replace
	//remove
	//unique
	//unique copy
	
	//reverse
	//rotate
	//next permute
		//lexiographically greater
	//next permute 
		//lexiographically smaller
	
	//shuffle contianer
	
	return 0;
}
