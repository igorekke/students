#include <iostream>
using namespace std;
int main(){
	int uczniowie, cukierki, x, y;
	cout << "Ilu uczniow jest w Twojej klasie: ";
	cin >> uczniowie;
	cout << "Ile cukierkow kupila mama: ";
	cin >> cukierki;
	x = cukierki/(uczniowie-1);
	cout << "Liczba cukierkow dla kazdego ucznia:" << x << endl;
	y = cukierki - x*(uczniowie-1);
	cout << "Liczba cukierkow dla Jasia na wieczor:" << y << endl; 
}
