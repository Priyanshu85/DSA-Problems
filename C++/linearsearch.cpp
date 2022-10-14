#include <bits/stdc++.h>
using namespace std;

void linearSearch(vector<int>&a, int n, int key) {
	for(int i =0 ;i <n ; ++i) {
		if(a[i] == key) {
			cout<<key<<" found at index : "<<i;
			return;
		}
	}
	cout<<key<<" not found!!";
}


int main() {
	int n;
	cout<<"Enter the size of array  : ";
	cin>>n;
	vector<int>a(n);
	cout<<"Enter elements in sorted order : ";
	for(int i =0 ; i< n ; ++i) {
		cin>>a[i];
	}
	int key;
	cout<<"Enter the element you want to search : ";
	cin>>key;
	linearSearch(a, n , key);
	return 0;
}