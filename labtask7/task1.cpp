#include <iostream>
using namespace std;

class Laptop {
    private:
    string model_num;
    string MAC_address;
    string company_name;

    public:
    Laptop() {
        model_num = "3443";
        MAC_address = "22.3.45.6";
        company_name = "LENOVO";
    }

    Laptop(string model_num, string MAC_address, string company_name) {
        this->model_num = model_num;
        this->MAC_address = MAC_address;
        this->company_name = company_name;
    }

    string getModel_num() {
        return model_num;
    }

    string getMAC_address() {
        return MAC_address;
    }

    string getCompay_name() {
        return company_name;
    }

    void setModel_num(string model_num) {
        this->model_num = model_num;
    }

    void setMAC_Address(string MAC_address) {
        this->MAC_address = MAC_address;
    }

    void setCompany_name(string company_name) {
        this->company_name = company_name;
    }

    void getLaptopInfo() {
        cout << "Model Number: " << getModel_num() << endl;
        cout << "MAC Address: " << getMAC_address() << endl;
        cout << "Company Name: " << getCompay_name() << endl;
    }
};

int main() {
    
    
    
    return 0;
}