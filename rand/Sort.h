#ifndef SORT_H;
#define SORT_H;
#include<iostream>
using namespace std;

template<class T>
T Sort(T Arry[], int Num) {
	int temp;
	for (int i = 0; i < Num - 1; i++) {
		for (int j = 0; j < Num - 1 - i; j++) {
			if (Arry[j] > Arry[j + 1]) {
				temp = Arry[j + 1];
				Arry[j + 1] = Arry[j];
				Arry[j] = temp;
			}
		}
	}
}

#endif // !SORT_H

