#include <iostream>
#include <unordered_set>
#include <vector>
#include <list>
using namespace std;

int main(){
	//unordered set
	unordered_set <string> myset = {"Addae", "Andrew", "Uzair"};
	unordered_set <string>::const_iterator itr = myset.find("Addae"); //O(1)	and if it is not found it will return the end of the set.

	

	pair<char, int> p = {'x', 9};
	
	if(itr != myset.end()){		
		cout << *itr << endl;
	}
	
	vector<string> people = {"Samer", "Stephen", "Louis", "Pete"};
	
	vector<string> vec = {"Christie", "Daniel"};
	
	vec.insert(vec.begin() + 1, people.begin(), people.end());
	
	myset.insert(vec.begin(), vec.end());

	for(auto elem : myset){
		cout << elem << " ";
	}

	//specific to hash tables
	cout << "\n\nThe load factor. The number of elements/buckets: " << myset.load_factor() << endl;
	string x = "Addae";
	cout << x << " is in bucket #" << myset.bucket(x) << "."  << endl;
	cout << "Total bucket #" << myset.bucket_count() << "." << endl;
	
	
	
	
	
	return 0;
}
