#include <iostream>
using namespace std;

template<typename T> //code bloating
T square(T x){
	return x * x;
}

template <typename T>
class BoVector{
	T arr[1000];
	int size;
public:
	BoVector():size(0){}
	void push(T x){arr[size] = x; size++;}
	T get(int i) const {return arr[i];}
	int getSize() const {return size;}
	void print()const {for(int i = 0; i < size; i++){cout << arr[i] << endl;}}
};


//need to overload operator

int main(){	
	cout << "explicit" << endl;
	cout << square<int>(5) << endl;
	cout << square<double>(5.5) << endl;
	
	cout << "inferred" << endl;
	cout << square(5) << endl;
	cout << square(5.5) << endl;
	
	BoVector<int> bv;
	bv.push(2);
	bv.push(5);
	bv.push(8);
	bv.push(9);
	bv.print();
	
	square(bv);
	return 0;
}
