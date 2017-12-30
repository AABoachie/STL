#include <iostream>
#include <iterator>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
	
	string filelname = "iteratorfile.txt";
	
	ofstream ofile(filelname);
	copy(istream_iterator<string>(cin), istream_iterator<string>(),
		ostream_iterator<string>(ofile, " "));
	
	ofile.close();
	
	cout << "\nFile Contents:" << endl;
	
	ifstream ifile(filelname);
	
	copy(istream_iterator<string>(ifile), istream_iterator<string>(), 
		 ostream_iterator<string>(cout, " "));
	ifile.clear();
		 
	cout << "\n\nFile Contents Reversed:" << endl;
	
	vector<string> vec;	
	ifile.seekg(0, ios::beg);	
	copy(istream_iterator<string>(ifile), istream_iterator<string>(), 
		 back_inserter(vec));
	
	copy(vec.rbegin(), vec.rend(),
		 ostream_iterator<string>(cout, " "));
		 
	

	
	return 0;
}
