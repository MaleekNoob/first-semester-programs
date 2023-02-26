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

    customer(customer &a) {
        id = a.id;
        name = a.name;
        address = a.address;
        phone = a.phone;
        age = a.age;
        
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
    customer b;

    cout << "Enter ID: ";
    cin >> id;
    b.setID(id);
    cout << "Enter Name: ";
    cin >> name;
    b.setName(name);
    cout << "Enter Address: ";
    cin >> address;
    b.setAddress(address);
    cout << "Enter Phone: ";
    cin >> phone;
    b.setPhone(phone);
    cout << "Enter Age: ";
    cin >> age;
    b.setAge(age);


    customer c("1", "2", "3", "4", 5);
    customer a(b);
    a.display();
    b.display();
    c.display();
    

    return 0;
}