#include <iostream>
#include <cstdio>
#include <cmath>
#define PI 3.14159265
using namespace std;
int main() {

	float a, b, c, cosA, cosB,cosC, radA, radB, radC, corA, corB, corC;
	cout << "Enter value a "; cin >> a;
	cout << "Enter value b "; cin >> b;
	cout << "Enter value c "; cin >> c;
	cosA = (b * b + c * c - a * a) / (2 * b * c);
	cosB = (a * a + c * c - b * b) / (2 * a * c);
	cosC = (a * a + b * b - c * c) / (2 * a * b);
	radA = acos(cosA);
	radB = acos(cosB);
	radC = acos(cosC);
	corA = radA * (180 / PI);
	corB = radB * (180 / PI);
	corC = radC * (180 / PI);
	printf("radian A= %f ", radA);
	printf("radian B= %f ", radB);
	printf("radian C= %f ", radC);
	printf("corner A= %f ", corA);
	printf("corner B= %f ", corB);
	printf("corner C= %f ", corC);
}
