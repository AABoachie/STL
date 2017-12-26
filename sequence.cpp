#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>

using namespace std;

int main(){
	//vector
	int arr[] = {1, 2, 3, 4, 5, 6, 67, 11};
	vector<int> vec1(arr, arr + sizeof(arr) / sizeof(int));
	vector<int> vec2(arr, arr + sizeof(arr) / sizeof(int) - 5);
	vec1.swap(vec2);
	
	for(vector<int>::iterator itr = vec2.begin(); itr != vec2.end(); itr++){
		cout << *itr << " ";
	}
	
	//deque
	int arr1[] = {4, 6, 7};
	deque<int> deq(arr1, arr1 + sizeof(arr1) / sizeof(int));
	deq.push_front(2);
	deq.push_back(3);	
	
	cout << endl;
	for(deque<int>::iterator itr = deq.begin(); itr != deq.end(); itr++){
		cout << *itr << " ";
	}
	
	//list
	int arr2[] = {4, 6, 7};
	list<int> mylist(arr2, arr2 + sizeof(arr2) / sizeof(int));
	mylist.push_back(6);
	mylist.push_back(4);
	
	list<int>::iterator itr = find(mylist.begin(), mylist.end(), 6);
	mylist.insert(itr, 8);
	
	cout << endl;
	for(list<int>::iterator itr = mylist.begin(); itr != mylist.end(); itr++){
		cout << *itr << " ";
	}
	
	//list 2
	int arr3[] = {5, 4, 5, 6, 7, 8, 0};
	list<int> mylist2(arr3, arr3 + sizeof(arr3) / sizeof(int));	
	
	mylist.splice(itr, mylist2, mylist2.begin(), mylist2.end());
	
	cout << endl;
	for(list<int>::iterator itr = mylist.begin(); itr != mylist.end(); itr++){
		cout << *itr << " ";
	}	
	
	return 0;
}
