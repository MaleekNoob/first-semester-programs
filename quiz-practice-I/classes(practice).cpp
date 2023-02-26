#include <iostream>
using namespace std;

class customer {
private:
    string id, name, address, phone;
    int age;

public:
    customer() {
        id = "0";
        name = "0";
        address = "0";
        phone = "0";
        age = 0;
    }

    customer(string id, string name, string address, string phone, int age) {
        this->id = id;
        this->name = name;
        this->address = address;
        this->phone = phone;
        this->age = age;
    }

    void setID(string id) {
        this->id = id;
    }

    void setName(string name) {
        this->name = name;
    }

    void setAddress(string address) {
        this->address = address;
    }

    void setPhone(string phone) {
        this->phone = phone;
    }

    void setAge(int age) {
        this->age = age;
    }

    string getID() {
        return id;
    }

    string getName() {
        return name;
    }

    string getAddress() {
        return address;
    }

    string getPhone() {
        return phone;
    }

    int getAge() {
        return age;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phone << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {

    string id, name, address, phone;
    int age;
    customer c[3];

    for (int i = 0; i < 3; i++) {

        cout << "\nEnter ID: ";
        cin >> id;
        cout << "\nEnter name: ";
        cin >> name;
        cout << "\nEnter address: ";
        cin >> address;
        cout << "\nEnter phone: ";
        cin >> phone;
        cout << "\nEnter age: ";
        cin >> age;

        c[i]  = customer(id, name, address, phone, age);
    }

    for (int i = 0; i < 3; i++) {
        cout << "--------------------------------------------" << endl;
        c[i].display();
    }

    return 0;
}