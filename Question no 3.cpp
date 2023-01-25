#include<iostream>
using namespace std;
int main() {
	cout << "Enter The Elements in your Array Sentinal Vlaue is 0";
	cout << endl;
	cout << "-----------------------------------------------------";
	cout << endl;
	int n = 1;
	int* arr = NULL;
	int* arrcp = NULL;
	int* arr1 = NULL;
	int* arrcp1 = NULL;
	int size = 1;
	int size1 = 1;
	int j = 0;
	arr = new int[size];
	arr1 = new int[size];
	for (int i = 0; i < 2; i++) {
		cout << "Enter the Element in your " << i + 1 << " Array";
		cout << endl;
		cout << "-------------------------------------------";
		cout << endl;
		if (i == 0) {
			while (n != 0) {
				cin >> n;
				if (n == 0) {
					break;
				}
				else {
					arr[j] = n;
					size = size + 1;
					arrcp = new int[size];
					for (int k = 0; k < size - 1; k++) {
						arrcp[k] = arr[k];
					}
					delete arr;
					arr = new int[size];
					for (int k = 0; k < size - 1; k++) {
						arr[k] = arrcp[k];
					}
					delete arrcp;
				}
				j = j + 1;
			}
		}
		n = 1;
		j = 0;
		if (i == 1) {
			while (n != 0) {
				cin >> n;
				if (n == 0) {
					break;
				}
				else {
					arr1[j] = n;
					size1 = size1 + 1;
					arrcp1 = new int[size1];
					for (int k = 0; k < size1 - 1; k++) {
						arrcp1[k] = arr1[k];
					}
					delete arr1;
					arr1 = new int[size1];
					for (int k = 0; k < size1 - 1; k++) {
						arr1[k] = arrcp1[k];
					}
					delete arrcp1;
				}
				j = j + 1;
			}
		}
	}
	cout << endl;
	for (int k = 0; k < 2; k++) {
		if (k == 0) {
			cout << "Your Array 1";
			cout << endl;
			cout << "--------------";
			cout << endl;
			for (int i = 0; i < size - 1; i++) {
				cout << arr[i]<<" ";
			}
		}
		if (k == 1) {
			cout << endl;
			cout << "Your Array 2";
			cout << endl;
			cout << "--------------";
			cout << endl;
			for (int i = 0; i < size1 - 1; i++) {
				cout << arr1[i]<<" ";
			}
		}
	}
	cout << endl;
	system("pause");
	return 0;
}