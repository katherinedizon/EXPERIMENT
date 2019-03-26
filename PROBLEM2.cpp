#include <iostream>
#include <iomanip>

	using namespace std;
int main() {
	float mass, density, volume, vol2;
	std::cout << std::fixed;
    std::cout << std::setprecision(2);
    cout << "Please input mass in Grams(g):";
    cin >> mass;
    cout << "Please input density in cubic cm(cm^3):";
    cin >> density;
    volume = ((0.25) * (mass/density));
    cout << "SOLVE:\n Given:\n Mass = " << mass <<" g\n Density = "<< density << " cm^3\n Required:\n Volume = ?? \n Solution:\n Volume = 1/4(mass/density)\n Volume = 1/4("<< mass << "/" << density << ")\n Volume = "<< volume << " g/cm^3" << endl;
	return 0;
}
