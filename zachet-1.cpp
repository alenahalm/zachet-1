#include <iostream>

using namespace std;

int main()
{
	const int m = 5;
	double z[m][m];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cin >> z[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (i != j) {
				z[i][j] /= z[j][j];
			}
			cout << z[i][j] << " ";
		}
		cout << " " << endl;
	}
	for (int i = 0; i < m; i++) {
		z[i][i] = 1;
	}
	system("pause");
}