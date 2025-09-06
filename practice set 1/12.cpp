#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c, discriminant, realPart, imagPart, root1, root2;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Real and distinct roots:\n";
        cout << "Root 1 = " << root1 << "\nRoot 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "Real and equal roots:\n";
        cout << "Root = " << root1 << endl;
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Imaginary roots:\n";
        cout << "Root 1 = " << realPart << " + " << imagPart << "i\n";
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }
    return 0;
}