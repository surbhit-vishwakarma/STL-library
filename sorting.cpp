#include <bits/stdc++.h>
using namespace std;


// Decreasing order Comparator
/*bool cmp(int a, int b)
{
	return a > b;
}*/

// Comparator with pairs -
bool cmp(pair<int,int> a, pair<int,int> b)
{
	if(a.first != b.first)
		return a.first > b.first;

	return a.second < b.second;
}

int main(int argc, char const *argv[])
{
/*	int n;
	cin >> n;

	vector<int> arr(n);
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
	}

	cout << "Before Sorting" << endl;
	for(auto x : arr)
		cout << x << " ";
	cout << endl;

	sort(arr.begin(), arr.end(),cmp);
	cout << "After Sorting" << endl;
	for(auto x : arr)
		cout << x << " ";
	cout << endl;*/

// ------------------------ Learning Comparator Functions --------------------

	int n ;
	cin >> n;

	vector<pair<int,int>> vp;
	for(int i = 0 ; i < n ;i++)
	{
		int a,b;
		cin >> a >> b;

		vp.push_back(make_pair(a,b));
	}

	cout << "Inputed Pairs before sorting: " << endl;
	for(auto x : vp)
	{
		cout << x.first << " " << x.second << endl;
	}

	cout << "Inputed Pairs after sorting: " << endl;
	sort(vp.begin(),vp.end(),cmp);
	for(auto x : vp)
	{
		cout << x.first << " " << x.second << endl;
	}

	return 0;
}