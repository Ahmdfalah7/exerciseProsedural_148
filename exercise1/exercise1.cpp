#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double c) {
	if (c >= 70)
		return "Lulus";
	else
		return "Gagal";
}

string status2(double rata, double nil) {
	if (rata >= 70 || nil >= 80)
		return "Lulus";
	else
		return "Gagal";
}

int main() {
	double nilM, nilB;
	cout << endl;
	cout << "Masukkan nilai matematika = ";
	cin >> nilM;
		cout << "Masukkan nilai bahasa inggris = ";
	cin >> nilB;
	cout << "Status Kelulusan = " << status(rerata(nilM, nilB));
	cout << "nStatus Kelulusan = " << status(rerata(nilM, nilB));
	return 0;
}

