#include <iostream>
using namespace std;
int main () {


	/*int n;
     cin >> n;
	for (int i = 1; i <= n; i += 1) {
		cout << '@';
	}*/


	/*int x = 0;
	int y = 0;
	int i = 0;
	int sum = 0;
	cout << "vvedite x:";
		cin >> x;
	cout << "vvedite y:";
		cin >> y;
		i = x;
		while (i <= y) {
			if (i % 2 == 0) { //четное
				sum += i;
			}
			i++;
		}
		cout << sum << endl;*/


	/*int x, y;
	cout << "vvedite x:";
	cin >> x;
	cout << "vvedite y:";
	cin >> y;
	for (int i = x; y <= x; i += 1) {
		if (i % 2 != 0) {
		}
	}
	cout << x << endl;*/


	
	/*for (int i = 0; i < 20; i++) {
		cout << '#';
		cout << endl;
	}
	for (int i = 0; i < 6; i++ ) {
		cout << '#';
		for (int j = 0; j < 18; j++) {
			cout << ' ';
			cout << '#' << endl;
	}
	
	for (int i = 0; i < 20; i++) {
		cout << '#';
		cout << endl;
	}*/


	/*int n;
	cin >> n;
	int i = 1;
	int prois = 1;
	while (i <= n) {
		if (i % 3 == 0) {
			prois *= i;
		}
		i++;
	}
	cout << prois << endl;*/


	//18. «адано натуральное число N.Ќайти количество натуральных чисел, не
	//превосход€щих N и не дел€щихс€ ни на одно из чисел 2, 3, 5.


	/*int N;
	int kol = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
			kol++;
		}
	}
	cout << "kolichestvo = " << kol << endl;*/


	//22. дано натуральное n.вычислить: 1 + 1 / 2 + 1 / 3 + 1 / 4 + ... + 1 / n.


	int N;
	double sum = 0;
	int i = 1;
	cin >> N;
	while (i <= N) {
		sum += 1.0 / i;
		i++;
	}
	cout << sum << endl;
    }