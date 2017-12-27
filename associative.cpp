#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(){
	//SET or multiset
	set<int> myset;
	myset.insert(3);
	myset.insert(1);
	myset.insert(7);
	
	set<int>::iterator it;
	it = myset.find(7);
	
	//find returns a pair of items
	pair<set<int>::iterator, bool> ret;
	ret = myset.insert(3); //this will fail beacsue it is a set and this set
					//a set can only have one type of element of the same type
	
	if(ret.second == false)
		it=ret.first;
	
	myset.insert(it, 9);	//9 goes whereever it wants to go becasue the underlining data structure is a binary tree.
	
	//myset.erase(it);
	
	for(auto item : myset){
		cout << item << " ";
	}
	
	//MAP
	map<char, int> mymap;
	mymap.insert(pair<char, int>('a', 100));
	mymap.insert(make_pair('z', 200));
	
	map<char, int>::iterator map_it = mymap.begin();
	mymap.insert(map_it, pair<char, int>('b', 300)); //iterator for hint
	
	map_it = mymap.find('z'); //uses a binary tree as its underlining datastructure.
	
	for(pair<char, int> v: mymap){
		cout << v.second << " ";
	}
	
}
