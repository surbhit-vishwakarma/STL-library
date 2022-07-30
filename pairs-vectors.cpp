#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{	
	// Declearing pair
	pair<int,int> p , p1;
	pair<int,int> p2;

	// Intialising
	p = make_pair(1,2);
	p1 = {1,4};

	// Functions
	/*cout << p.first << " " << p.second << endl;
	cout << p1.first << " " << p1.second << endl;*/

	/*p.second = p1.second;
	cout << p.first << " " << p.second << endl;*/

	// Swapping values of p in p2.
	p2.swap(p);
	cout << p.first << " " << p.second << endl;

	// Declearing vector of pairs
	vector<pair<int,int>> v;
	int i = 0;
	while(true)
	{
		if(i==3)
			break;

		int a,b;
		cin >> a >> b;

		v.push_back({a,b});

		i++;
	}

	for(auto x : v)
	{
		cout << x.first << "---" << x.second << endl;
	}
	cout << "--------------------------"<<endl;
	// Vectors :-
	// Intialising :-

	vector<int> a;
	vector<int> b(5,2);
	vector<int> c(b.begin(),b.end());
	vector<int> d{1,2,3,54};

	// Outputting :-
	for(int i = 0 ; i < b.size() ; i++)
		cout << b[i] << " ";
	cout << endl;

	for(vector<int>::iterator it = c.begin() ; it != c.end() ; ++it)
		cout << (*it) << " ";
	cout << endl;

	for(auto x : d)
		cout << x << " ";
	cout << endl;

	// Few methods :-
	// size - returns the size of vector
	cout << b.size() << endl;

	// push_back() pushes the element at the end i.e appends the element
	b.push_back(22);
	cout << b.size() << endl;

	// capacity - returns the total capacity of vector:-
	cout << b.capacity() << endl;

	// pop_back() - removes the last element from the vector;
	for(auto x : b)
	{
		cout << x << " ";
	}
	cout << endl;
	cout << "After popping : " << endl;
	b.pop_back();
	for(auto x : b)
	{
		cout << x << " ";
	}
	cout << endl;
	// insert() :- takes first argument as iterator(index) and 
	// second as the element to be inserted , it insert after the
	// specified location for eg if given indx is 2
	// it will isert at 3 position .
	b.insert(b.begin() + 2,69);
	for(auto x : b)
	{
		cout << x << " ";
	}
	cout << endl;

	// Erase work same as insert but it take only
	// 1 argument.
	b.erase(b.begin()+2);
	for(auto x : b)
	{
		cout << x << " ";
	}
	cout << endl;

	// resize() - increase the size of the vector
	cout << b.size() << endl;
	b.resize(10);
	cout << b.size() << endl;

	// clear() - removes all the element in a vector but doesn't
	// delete the memory occupied by it.
	b.clear();
	cout << b.size() << endl; // 0
	cout << b.capacity() << endl; // still 10

	for(auto x : b)
	{
		cout << x << " ";
	}
	cout << endl;

	// empty() - it returns true if vector is empty else false.
	cout << b.empty() << endl;

	// front() - return 1st element
	// back() - return last element

	for(auto x : d)
	{
		cout << x << " ";
	}
	cout << endl;
	return 0;
}