#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>
using namespace std;

int main(){
	/*
	basic
	
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
	}*/
	
	//advanced
	
	//random access iterator for vector, quque, array
	vector<int>::iterator itr;
	auto itr1 = itr + 5;
	auto itr2 = itr - 4;
	
	if(itr2 > itr1)
		++itr; //faster, does not return old value
	--itr;
	
	//list, set/multiset, map/multimap, bidirectional 
	list<int>::iterator itr_list;
	++itr_list;
	--itr_list;
	
	//forward iterator: forward_list
	forward_list<int>::iterator itr_forward;
	++itr_forward;
	
	//unordered provides at least the forward iterator, or didirectional
	//depends on the STL implemetnation
	/*
	//input iterator--read
	int x = *itr;
	//output iterator --output values
	*itr = 100;
	*/
	
	//iterator, and const_iterator
	//const iterator, only read only access
	
	//iterator functions
	advnace(itr, 5);
	distance(itr1, itr2);
	
	/*
	*	insert iterator
	*	stream iterator
	*	reverse iterator
	*	move iterator
	*/
	
	//insert iterator
	vector<int> vec1 = {4, 5};
	vector<int> vec2 = {12, 14, 16, 18};
	
	vector<int>::iterator it = find(vec2.begin(), vec2.end(), 16);
	
	
	//calling copy allows you to insert the in the location of the iterator
	//copy uses an insert iterator
	//back insert_iterator, front insert iterator
	
	//Stream iterator
	
	return 0;
}
