#include<iostream>
using namespace std;
void Buble_Sorting(int* a) {
	cout << "Enter the Values in your Array";
	cout << endl;
	cout << "------------------------------";
	cout << endl;
	int* i = new int;
	int* j = new int;
	for (*i = 0; *i < 5; *i=*i+1) {
		cin >> *(a + *i);
	}
	for (*i = 0; *i < 5; *i = *i + 1) {
		for (*j = *i + 1; *j < 5; *j=*j+1) {
		if (*(a + *i) > *(a + *j)) {
				swap(*(a + *i), *(a + *j));
			}
		}
	}
	cout << endl;
	cout << "Your Array After the Bubble Sroting is";
	cout << endl;
	cout << "--------------------------------------";
	cout << endl;
	for (*i = 0; *i < 5; *i=*i+1) {
		cout << *(a + *i) << " ";
	}
}
int main() {
	int a[5];
	Buble_Sorting(a);
	cout << endl;
	system("pause");
	return 0;
}