#include<iostream>
using namespace std;

int main() {
	int bob;
	cout << "how many blocks wide" << endl;
	cin >> bob;

	for (int i = 0; i < bob; i++) {
		for (int j = 0; j < bob; j++)
			cout << '#';
		cout << endl;
	}
}