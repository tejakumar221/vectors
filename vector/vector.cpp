// vector.cpp :
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>v = { 6, 5, 4, 8, 9, 11 };
	cout << "Vector: ";
	for (int a : v)
	{
		cout << a << " ";
	}
	cout << endl;
	//finding the initial size of the vector:Number of elements in the vector
	cout << "Length: " << v.size() << endl;
	//Adding values into the vector
	v.push_back(10);
	v.push_back(15);
	v.push_back(3);
	v.push_back(7);
	
	cout << "New Length: "<<v.size() << endl;
	cout << "Vector_1: ";
	for (int x1 : v)
	{
		cout << x1 << " ";
	}
	cout << endl;
	//Removing value/s from the vector
	v.pop_back();
	cout << "New Length1: " << v.size() << endl;
	for (int x2 : v)
	{
		cout << x2 << " ";
	}
	cout << endl;
	//Accessing the first element
	cout << "First Element: " << v.front() << endl;
	//Accessing the back element
	cout << "Back Element: " << v.back() << endl;
	//Accessing the element at specific position
	cout <<"7th element in the vector: "<< v[6] << endl;
	cout << "First_element: " << *v.begin() << endl;
	cout << "First_element: " << (*--v.end()) << endl;
	cout << "Reverse_first_element: " << *v.rbegin() << endl;
	cout << "Reverse_last_element: " << (*--v.rend()) << endl;
	cout << "Before sorting: " << endl;
	for (int x : v)
	{
		cout << x << " ";
	}
	cout << endl;
	cout << "Size: " << v.size() << endl;
	sort(v.begin(), v.end());
	cout << "After sorting: " << endl;
	for (int x : v)
		{
		cout << x << " ";
		}
	cout << endl;
	cout << "Size: " << v.size() << endl;
	reverse(v.begin(), v.end());
	cout << "After Reversing: " << endl;
	for (int x : v)
	{
		cout << x << " ";
	}
	cout << endl;
	cout << "Size: " << v.size() << endl;
	cout << "First_element: " << *v.begin() << endl;
	cout << "First_element: " << (*--v.end()) << endl;
	cout << "Reverse_first_element: " << *v.rbegin() << endl;
	cout << "Reverse_last_element: " << (*--v.rend()) << endl;
	//Inserting elements at a specific position
	v.insert(v.begin() + 6, 22);
	for (int y : v)
	{
		cout << y << " ";
	}
	cout << endl;
	cout << "Size: " << v.size() << endl;
	v.erase(v.begin() + 5);
	for (int y : v)
	{
		cout << y << " ";
	}
	cout << endl;
	cout << "Size: " << v.size() << endl;
	cout<<"Removing elements based on the range: "<<endl;
	auto first = next(v.begin(), 2);
	auto last = next(v.begin(), 6);
	v.erase(first, last);
	for (int y1 : v)
	{
		cout << y1 << " ";
	}
	cout << "Size: " << v.size() << endl;
	cout << endl;
	vector<int>v1;
	v1.swap(v);
	for (int y2 : v1)
	{
		cout << y2 << " ";
	}
	cout << endl;
	//cout << "Size: " << v.size() << endl;
	v.clear();
	cout << "Size: " << v.size() << endl;
	if (v.empty())
	{
		cout << "Vector is empty!!" << endl;
	}
	else
	{
		for (int z : v)
		{
			cout << z << " ";
		}
	}
	if (v1.empty())
	{
		cout << "Vector is empty!!" << endl;
	}
	else
	{
		for (int z1 : v1)
		{
			cout << z1 << " ";
		}
	}
}
