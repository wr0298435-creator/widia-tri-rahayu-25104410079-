#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "masukkan jumlah baris:" << endl;
	cin >> n;


	for (int i = 0; i < n; i++)
	{
		// agar berbentuk segitiga 
		for (int s = 0; s < n - i; s++) {
			cout << " ";
		}
		int n = 1; // nilai baris pertama selalu 1
		for (int j = 0; j <= i; j++) {
			cout << n << " ";

			//rumus mendapatkan nilai berikutnya
			n = n * (i - j) / (j + 1);
		}

		cout << endl;
	}
	cin.get();
}