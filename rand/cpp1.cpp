#include<iostream>
#include<vector>
#include"Sort.h"
using namespace std;

int randon() {
	int NewValue;
	NewValue = rand() % 20 + 2;
	return NewValue;
}


int main() {

	vector<int> v = {};

	for (int i = 0; i < 20; i++) {
		v.push_back(randon());
		cout << v[i] << endl;

	}
	
	system("pause");
	return 0;
}