//associative array
//can be implemented with map or multimap beause of [] operator,
//and they dont have unique keys

#include <iostream>
#include <unordered_map> //completely unordered
#include <map>			//compleltely random
#include <vector>	//need a vector of pairs to stay in order

using namespace std;



int main(){
	unordered_map <char, string> names = {{'A', "Addae"},
						 	  			 {'O', "Osei"}};
	vector<int> vec = {1, 2, 3};
	
	names['K'] = "Kyeiwaa";
	names.insert(make_pair('L', "Link"));
	
	names.insert(make_pair('L', "Love")); //wont work
	
	for(auto i : names){
		cout << i.second << endl;
	}
	
	//correct way to print out the elements of the a map
	auto itr = names.find('A');
	if(itr != names.end())
		cout << itr->second;
	
	return 0;
}

//container adaptors
//stack: LIFO, push(), pop(), top()
//queue: FIFO, push(), pop, front(), back()
//priority queue: the first one has the highest property

//associatve based containners invalides pointers. The pointers that 
//point to the content of the pointer could get invalidated.
//you should never assume that they are still invalid.

//array based containers {vector, deque}
//node basedf contianers {list, map, set, unordered_set, unordered_map}

