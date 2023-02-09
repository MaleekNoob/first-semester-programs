#include <iostream>
using namespace std;

void print(int n) {
    if (n > 0) {
        print(n - 1);
        cout << '*';
    }
}

void pattern(int n) {
    if (n > 0) {
        cout << endl;
        print(n);
        pattern (n - 1);
    }
}

int main()
{
    int num;
    cout << "\nEnter number: ";
    cin >> num;
    pattern(num);

    return 0;
} // namespace std;

