#include <iostream>
using namespace std;

int main() {

    int hour1, minute1, second1, hour2, minute2, second2, netHour, netMinute, netSecond;
    string AMorPM1, AMorPM2;


    cout << "time should be entered in the 12 hour format: " << endl;
    cout << "Enter first time: ";
    cin >> hour1 >> minute1 >> second1 >> AMorPM1;

    cout << "Enter second time: ";
    cin >> hour2 >> minute2 >> second2 >> AMorPM2;

    if (AMorPM1 == AMorPM2) {
        if (hour1 == hour2) {
            if (minute1 == minute2) {
                if (second1 == second2) {
                    cout << "Both times are same" << endl;
                }
                else {
                    if (second1 > second2) {
                        netSecond = second1 - second2;
                        cout << "Net time is: " << netSecond << " seconds" << endl;
                    }
                    else {
                        netSecond = second2 - second1;
                        cout << "Net time is: " << netSecond << " seconds" << endl;
                    }
                }
            }
            else {
                if (minute1 > minute2) {
                    netMinute = minute1 - minute2;
                    cout << "Net time is: " << netMinute << " minutes" << endl;
                }
                else {
                    netMinute = minute2 - minute1;
                    cout << "Net time is: " << netMinute << " minutes" << endl;
                }
            }
        }
        else {
            if (hour1 > hour2) {
                netHour = hour1 - hour2;
                cout << "Net time is: " << netHour << " hours" << endl;
            }
            else {
                netHour = hour2 - hour1;
                cout << "Net time is: " << netHour << " hours" << endl;
            }
        }
    }
    else if ((AMorPM1 == "PM") && (AMorPM2 == "AM"))
    {
        if (hour1 == hour2) {
            if (minute1 == minute2) {
                if (second1 == second2) {
                    cout << "Both times are same" << endl;
                }
                else {
                    if (second1 > second2) {
                        netSecond = second1 - second2;
                        cout << "Net time is: " << netSecond << " seconds" << endl;
                    }
                    else {
                        netSecond = second2 - second1;
                        cout << "Net time is: " << netSecond << " seconds" << endl;
                    }
                }
            }
            else {
                if (minute1 > minute2) {
                    netMinute = minute1 - minute2;
                    cout << "Net time is: " << netMinute << " minutes" << endl;
                }
                else {
                    netMinute = minute2 - minute1;
                    cout << "Net time is: " << netMinute << " minutes" << endl;
                }
            }
        }
        else {
            if (hour1 > hour2) {
                netHour = hour1 - hour2;
                cout << "Net time is: " << netHour << " hours" << endl;
            }
            else {
                netHour = hour2 - hour1;
                cout << "Net time is: " << netHour << " hours" << endl;
            }
        }
    }
    else if ((AMorPM1 == "AM") && (AMorPM2 == "PM"))
    {
        if (hour1 == hour2) {
            if (minute1 == minute2) {
                if (second1 == second2) {
                    cout << "Both times are same" << endl;
                }
                else {
                    if (second1 > second2) {
                        netSecond = second1 - second2;
                        cout << "Net time is: " << netSecond << " seconds" << endl;
                    }
                    else {
                        netSecond = second2 - second1;
                        cout << "Net time is: " << netSecond << " seconds" << endl;
                    }
                }
            }
            else {
                if (minute1 > minute2) {
                    netMinute = minute1 - minute2;
                    cout << "Net time is: " << netMinute << " minutes" << endl;
                }
                else {
                    netMinute = minute2 - minute1;
                    cout << "Net time is: " << netMinute << " minutes" << endl;
                }
            }
        }
        else {
            if (hour1 > hour2) {
                netHour = hour1 - hour2;
                cout << "Net time is: " << netHour << " hours" << endl;
            }
            else {
                netHour = hour2 - hour1;
                cout << "Net time is: " << netHour << " hours" << endl;
            }
        }
    }
    else
        cout << "Invalid time format" << endl;

    

}