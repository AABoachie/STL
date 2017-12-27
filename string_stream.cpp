#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
	vector<string> vec = {"Reject Squad"};
	/*
	copy(istream_iterator<string>(cin), istream_iterator<string>(),
		back_inserter(vec));
		
	copy(vec.begin(), vec.end(), ostream_iterator<string>(cout, " "));
	*/
	
	copy(istream_iterator<string>(cin), istream_iterator<string>(),
		ostream_iterator<string>(cout, " "));
		
	//reverse iterator, allows you to go backwards
}

