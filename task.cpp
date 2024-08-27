#include <iostream>
#include <string>
using namespace std;

struct WeatherData {
    string cityName;
    float temperature;
    int humidity;
    string weatherCondition;
};

void displayWeatherData(const WeatherData cities[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "City: " << cities[i].cityName << endl;
        cout << "Temperature: " << cities[i].temperature << "°C" << endl;
        cout << "Humidity: " << cities[i].humidity << "%" << endl;
        cout << "Weather Condition: " << cities[i].weatherCondition << endl;
        cout << "-------------------------" << endl;
    }
}

int main() {
    WeatherData cities[7] = {
        {"ISB", 25.0, 60, "Sunny"},
        {"HARIPUR", 28.0, 50, "Sunny"},
        {"WAH CANTT", 22.0, 65, "Cloudy"},
        {"KARACHI", 30.0, 70, "Rainy"},
        {"MULTAN", 35.0, 20, "Sunny"},
        {"LHR", 24.0, 55, "Partly Cloudy"},
        {"RWP", 32.0, 75, "Humid"}
    };

    int choice = 0;

    while (choice != 3) {
        cout << "Menu:\n";
        cout << "1. View Weather\n";
        cout << "2. About the App\n";
        cout << "3. Exit\n";
        cout << "Choose an option (1-3): ";
        cin >> choice;

        if (choice == 1) {
            displayWeatherData(cities, 7);
        } else if (choice == 2) {
            cout << "This app is designed to show weather data and provide information about itself.\n";
        } else if (choice == 3) {
            cout << "Goodbye!\n";
        } else {
            cout << "Oops, that's not a valid choice. Try again.\n";
        }
    }

    return 0;
}