#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int N;

	cout << "Enter the first initial value: ";
	cin >> n1;
	cout << "Enter the second initial value: ";
	cin >> n2;

	cout << "Enter the number of sequences (N > 2): ";
	cin >> N;

	cout << n1 << " " << n2 << " ";

	for (int i = 3; i <= N; i++) {
		int sum = n1 + n2;
		cout << sum << " ";
		n1 = n2;
		n2 = sum;
	}

	cout << endl;

	return 0;
}