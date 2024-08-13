#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Passenger {
private:
    string name;
    int passportNumber;
public:
    Passenger(string n = "", int p = 0) : name(n), passportNumber(p) {}

    void displayInfo() const {
        cout << "Passenger Name: " << name << "\nPassport Number: " << passportNumber << endl;
    }
    int getPassportNumber() const {
        return passportNumber;
    }
};

class Flight {
private:
    string flightNumber;
    string destination;
    vector<Passenger> passengers;
public:
    Flight(string num = "", string dest = "") : flightNumber(num), destination(dest) {}
    void addPassenger(const Passenger& p) {
        passengers.push_back(p);
    }
    void removePassenger(int passportNumber) {
        for (auto it = passengers.begin(); it != passengers.end(); ++it) {
            if (it->getPassportNumber() == passportNumber) {
                passengers.erase(it);
                cout << "Passenger with Passport Number " << passportNumber << " removed." << endl;
                return;
            }
        }
        cout << "Passenger with Passport Number " << passportNumber << " not found." << endl;
    }
    void displayInfo() const {
        cout<<"Flight Number: "<<flightNumber<<"\nDestination: "<<destination<<endl;
        cout<<"Passengers: "<<endl;
        for (const Passenger& p : passengers) {
            p.displayInfo();
            cout<<endl;
        }
    }

    string getFlightNumber() const {
        return flightNumber;
    }
};
class Airline {
private:
    string airlineName;
    vector<Flight> flights;

public:
    Airline(string name = "") : airlineName(name) {}

    void addFlight(const Flight& f) {
        flights.push_back(f);
    }

    void removeFlight(const string& flightNumber) {
        for (auto it = flights.begin(); it != flights.end(); ++it) {
            if (it->getFlightNumber() == flightNumber) {
                flights.erase(it);
                cout << "Flight with Number " << flightNumber << " removed." << endl;
                return;
            }
        }
        cout << "Flight with Number " << flightNumber << " not found." << endl;
    }

    void displayFlights() const {
        cout << "\n--- Flight List ---" << endl;
        for (const Flight& f : flights) {
            f.displayInfo();
            cout<<endl;
        }
    }

    Flight* findFlight(const string& flightNumber) {
        for (auto& f : flights) {
            if (f.getFlightNumber() == flightNumber) {
                return &f;
            }
        }
        return nullptr;
    }
};
// Function to get Passenger details from user
Passenger getPassengerFromUser() {
    string name;
    int passportNumber;
    cout << "Enter Passenger Name: ";
    getline(cin, name);
    cout << "Enter Passport Number: ";
    cin >> passportNumber;
    cin.ignore();
    return Passenger(name, passportNumber);
}

// Function to get Flight details from user
Flight getFlightFromUser() {
    string flightNumber, destination;
    cout << "Enter Flight Number: ";
    getline(cin, flightNumber);
    cout << "Enter Destination: ";
    getline(cin, destination);
    return Flight(flightNumber, destination);
}
int main() {
    Airline airline("Global Airlines");
    int choice;
    do {
        cout << "\nFlight Management System\n";
        cout << "1. Add Flight\n";
        cout << "2. Remove Flight\n";
        cout << "3. Display Flights\n";
        cout << "4. Add Passenger to Flight\n";
        cout << "5. Remove Passenger from Flight\n";
        cout << "6. Display Passengers of Flight\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1: {
                Flight flight = getFlightFromUser();
                airline.addFlight(flight);
                break;
            }
            case 2: {
                string flightNumber;
                cout << "Enter Flight Number to remove: ";
                getline(cin, flightNumber);
                airline.removeFlight(flightNumber);
                break;
            }
            case 3: {
                airline.displayFlights();
                break;
            }
            case 4: {
                string flightNumber;
                cout << "Enter Flight Number to add Passenger to: ";
                getline(cin, flightNumber);
                Flight* flight = airline.findFlight(flightNumber);
                if (flight) {
                    Passenger passenger = getPassengerFromUser();
                    flight->addPassenger(passenger);
                } else {
                    cout << "Flight with Number " << flightNumber << " not found." << endl;
                }
                break;
            }
            case 5: {
                string flightNumber;
                int passportNumber;
                cout << "Enter Flight Number to remove Passenger from: ";
                getline(cin, flightNumber);
                cout << "Enter Passenger Passport Number to remove: ";
                cin >> passportNumber;
                cin.ignore();
                Flight* flight = airline.findFlight(flightNumber);
                if (flight) {
                    flight->removePassenger(passportNumber);
                } else {
                    cout << "Flight with Number " << flightNumber << " not found." << endl;
                }
                break;
            }
            case 6: {
                string flightNumber;
                cout << "Enter Flight Number to display Passengers: ";
                getline(cin, flightNumber);
                Flight* flight = airline.findFlight(flightNumber);
                if (flight) {
                    flight->displayInfo();
                } else {
                    cout << "Flight with Number " << flightNumber << " not found." << endl;
                }
                break;
            }
            case 7: {
                cout << "Exiting the system." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (choice != 7);

    return 0;
}
