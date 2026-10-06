#include <iostream>
#include <cmath> // Potrebno za funkcije sqrt i pow

using namespace std;

int main() {
    // Definiranje varijabli za stranice trokuta
    double a, b, c;

    // Unos duljina kateta od strane korisnika
    cout << "Unesite duljinu katete a: ";
    cin >> a;

    cout << "Unesite duljinu katete b: ";
    cin >> b;
    // Izra?un hipotenuze po formuli c = korijen(a^2 + b^2)
    c = sqrt(pow(a, 2) + pow(b, 2));

    // Ispis rezultata
    cout << "Duljina hipotenuze c iznosi: " << c << endl;

    return 0;