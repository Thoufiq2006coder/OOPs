#include <iostream>
using namespace std;

class Temperature {
    private:
        float celsius;

    public:
        void setCelsius(float tempCelsius) {
            celsius = tempCelsius;
        }

        float getFahrenheit() const {
            return (celsius * 9.0 / 5.0) + 32.0;
        }
};

int main() {
    Temperature temp;
    temp.setCelsius(25.0);
    cout << "Temperature in Fahrenheit: " << temp.getFahrenheit() << endl;
    return 0;
}
