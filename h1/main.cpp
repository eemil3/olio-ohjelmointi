#include <iostream>
#include <iomanip>

using namespace std;
float a;
float b;

// laskee ja tulostaa a, b summan.
void calcSum(float a, float b) {
    float sum = a + b;
    cout << fixed << setprecision(2); // Kahden desimaalin tarkkuus.
    cout << "calcSum: " << sum << endl;
}

// jos jakaja ei ole nolla, laskee ja tulostaa osamäärän.
void calcDiv(float a, float b) {
    if (b == 0) {
        cout << "calcDiv: Virhe!" << endl;
    } else {
        float div = a / b;
        cout << fixed << setprecision(2); // Kahden desimaalin tarkkuus.
        cout << "calcDiv: " << div << endl;
    }
}

// laskee a, b summan, ja palauttaa tuloksen.
float retSum(float a, float b) {
    return a + b;
}

// jos jakaja ei ole nolla, laskee ja palauttaa osamäärän.
float retDiv(float a, float b) {
    if (b == 0) {
        cout << "retDiv: Virhe!" << endl;
        return 0;
    } else {
        return a / b;
    }
}

int main() {
    cout << "Anna luku a: ";
    cin >> a;
    cout << "Anna luku b: ";
    cin >> b;
    calcSum(a, b);
    calcDiv(a, b);

    float summa = retSum(a, b);
    float osamaara = retDiv(a, b);

    cout << fixed << setprecision(2); // Kahden desimaalin tarkkuus.
    cout << "retSum: " << summa << endl;
    cout << "retDiv: " << osamaara << endl;

    return 0;
}

