// #include <iostream>
// using namespace std;
// int main() {
//     // int n;
//     // do {
//     //     cout<<"List of emojis:\n";
//     //     cout<<"1. Angel\n2. Happy\n3. Smiling face with hearts\n4. Tears of Happiness\n";
//     //     cout<<"5. Love\n6. Shocking\n7. Sad\n8. Cry\n9. EXIT\n";
//     //     cout<<"Choose your option(To EXIT, choose '9'): ";
//     //     cin>>n;
//     //     switch(n) {
//     //         case 1:
//     //             cout<<" 👼 \n\n";
//     //             break;
//     //         case 2:
//     //             cout<<" 😀 \n\n";
//     //             break;
//     //         case 3:
//     //             cout<<" 😍 \n\n";
//     //             break;
//     //         case 4:
//     //             cout<<" 😂 \n\n";
//     //             break;
//     //         case 5:
//     //             cout<<" 🖤 \n\n";
//     //             break;
//     //         case 6:
//     //             cout<<" 😲 \n\n";
//     //             break;
//     //         case 7:
//     //             cout<<" 😢 \n\n";
//     //             break;
//     //         case 8:
//     //             cout<<" 😭 \n\n";
//     //             break;
//     //         case 9:
//     //             exit(0);
//     //     }
//     // } while(n!=9);
// }

#include <iostream>
#include "emoji.h"

using namespace std;
using namespace emojicpp;

int main() {
    string protagonist = emojize (":mouse:");
    cout << protagonist << endl;
    return 0;
}