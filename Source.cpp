#include<iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	//1
	/*for (int i = 1; i <= 5; i = i + 1) {
		cout << i << " ";
	}*/

	//2
	/*for (int i = 5; i >= 1; i = i - 1) {
		cout << i << " ";
	}*/

	//3
	/*for (int i = -10; i <= 10; i = i +1 ) {
		cout << i << " ";
	}*/

	//4
	/*int s = 0;
	for (int i = 1; i <= 5; i = i +1) {
		s = s + i;
		cout << s << " ";
	}*/

	//5
	/*for (int i = 1; i <= 10; i = i + 1) {
		cout << "3 * " << i << " = " << 3 * i << endl;
	}*/

	//задачи

	//1
	/*for (int i = 10; i <= 20; i = i + 1) {
		cout << i * i << endl;
	}*/

	//2
	/*int n;
	cin >> n;
	int s = 0;
	for (int i = 1; i <= n; i = i + 1) {
		s = s + i;
		cout << s << endl;
	}*/

	//3
	/*int n;
	cin >> n;
	cout << "0" << endl;
	int s = 1;
	for (int i = 1; i <= n; i = i + 1) {
		s = s * i;
		cout << s << endl;
	}*/

	//4
	/*int n, x;
	cin >> n;
	int kp = 0;
	int ko = 0;
	int kn = 0;
	for (int i = 1; i <= n; i = i + 1) {
		cin >> x;
		if (x > 0) {
			kp++;
		}
		else if (x < 0) {
			ko++;
		}
		else if (x == 0) {
			kn++;
		}
		cout<< "+= " << kp << endl << "-= " << ko << endl << "0= " << kn << endl;
	}*/

	//5 драхмы
	/*for (int i = 1; i <= 10; i = i + 1) {
		cout << i << " драхм = " << i * 3.7325 << endl;
	}*/
	//6

	/*int s, n;
	cin >> s >> n;
	int v = 0;
	int p = (s / 100) * 3;
	for (int i = 1; i <= n; i = i + 1) {
		v = v + p;
	}
	cout << v;*/


		//7
		/*for (int i = 1; i <= 10; i = i + 1) {
			int a, b;
			cin >> a >> b;
			if (a > b) {
				cout << a << endl;
			}
			else if (a < b) {
				cout << b << endl;
			}
			else if (a = b) {
				cout << "=" << endl;
			}
		}*/

		//8
		//for (int i = 20; i <= 50; i = i + 1) {
		//	if ( 0 == ( i % 3 ) && ( i % 5 ) != 0 ) {
		//		cout << i << endl;
		//	}
		//}

		//9
		//for (int i = 35; i <= 87; i = i + 1) {
		//	if ( (i % 7 ) == 1  || (i % 7) == 2 || (i % 7) == 5) {
		//		cout << i << endl;
		//	}
		//}






}
