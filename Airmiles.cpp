// aeromiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Karta {
private:
	string code;
	float km, pontoi;
public:
	void maker(string& code, float& km, float& pontoi) {
		code = "";
		km = 2000;
		pontoi = 2000;

	}
	void getcode(string code) {
		cout << code;

	}
	void getpontoi(float pontoi) {
		cout << pontoi;

	}
	void getkm(float km) {
		cout << km;
	}
	void setpontoi(float &pontoi) {
		float newpontoi = 0;
		pontoi = newpontoi + pontoi;
	}
	void setKm(float& km) {
		float newkm = 0;
		km = newkm + km;
	}
	void print(float &pontoi) {
		if (pontoi < 5000) {
			cout << "You are not eligible to gift yet" << endl;
		}
		else if (pontoi >= 5000 && pontoi < 10000) {
			cout << "Seat upgrade" << endl;
		}
		else {
			cout << "Free trip !!!" << endl;
		}
	}
	void agora(float &pontoi) {
		cout << "How much money do you want to give??" << endl;
		float lefta, newpontoi2;
		cin >> lefta;
		newpontoi2 = lefta * 10;
		cout << "agorasate" << newpontoi2 << "pontous" << endl;
		pontoi = newpontoi2 + pontoi;
	}
};
void main() {
	Karta aeromiles;
	string code;
	float  km, pontoi;
	//pontoi = 1;
	aeromiles.maker(code,km,pontoi);
	cout << pontoi;
	aeromiles.agora(pontoi);
	cout << pontoi;
	aeromiles.setpontoi(pontoi);
	cout << pontoi;
	aeromiles.print(pontoi);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
