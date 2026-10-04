#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    int choice;
    string pkg;

    while (true) {
        cout << "\n=== Simple Package Manager (SPM) MENU ===\n";
        cout << "1. install\n";
        cout << "2. remove\n";
        cout << "3. update\n";
        cout << "4. upgrade\n";
        cout << "5. osupgrade\n";
        cout << "0. exit\n";
        cout << "\n=== Source at: https://github.com/oczkowodne1234/SPM-for-Debian  ==="<<endl;
	cout << "Your choice: ";
        cin >> choice;

        if (choice == 0) break;

        if (choice == 1) {
            cout << "package> ";
            cin >> pkg;
            system(("sudo apt install " + pkg).c_str());
        }

        else if (choice == 2) {
            cout << "package> ";
            cin >> pkg;
            system(("sudo apt remove " + pkg).c_str());
        }

        else if (choice == 3) {
            system("sudo apt update");
        }

        else if (choice == 4) {
            system("sudo apt upgrade -y");
        }

        else if (choice == 5) {
            system("sudo apt update && sudo apt upgrade -y");
        }

        else {
            cout << "Unknown option\n";
        }
    }

    return 0;
}
