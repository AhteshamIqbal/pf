#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX_ACCOUNTS = 100; // Maximum number of accounts
    int accountNumbers[MAX_ACCOUNTS];
    string accountNames[MAX_ACCOUNTS];
    float accountBalances[MAX_ACCOUNTS];
    int totalAccounts = 0;

    int choice;
	cout << "Programming Fundamentals Project\n\nMade by:\n1.Abdul Haseeb\n2.Furqan Faisal\n3.Ehtesham Iqbal\n\n";
    cout << "Welcome to the HEF Banking System!" << endl;

    do {
        // Display Menu
        cout << "\nMenu:" << endl;
        cout << "1. Create a new account" << endl;
        cout << "2. Deposit money" << endl;
        cout << "3. Withdraw money" << endl;
        cout << "4. Check account balance" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Create a new account
            if (totalAccounts < MAX_ACCOUNTS) {
                cout << "\nEnter account number: ";
                cin >> accountNumbers[totalAccounts];
                cin.ignore(); // Ignore leftover newline character
                cout << "Enter account holder's name: ";
                getline(cin, accountNames[totalAccounts]);
                accountBalances[totalAccounts] = 0; // Initial balance is 0
                totalAccounts++;
                cout << "Account created successfully!" << endl;
            } else {
                cout << "Sorry, no more accounts can be created." << endl;
            }
        } else if (choice == 2) {
            // Deposit money
            int accountNumber;
            float amount;
            bool found = false;

            cout << "\nEnter account number: ";
            cin >> accountNumber;

            for (int i = 0; i < totalAccounts; i++) {
                if (accountNumbers[i] == accountNumber) {
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    if (amount > 0) {
                        accountBalances[i] += amount;
                        cout << "Deposit successful! New balance: " << accountBalances[i] << endl;
                    } else {
                        cout << "Invalid amount!" << endl;
                    }
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Account not found!" << endl;
            }
        } else if (choice == 3) {
            // Withdraw money
            int accountNumber;
            float amount;
            bool found = false;

            cout << "\nEnter account number: ";
            cin >> accountNumber;

            for (int i = 0; i < totalAccounts; i++) {
                if (accountNumbers[i] == accountNumber) {
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    if (amount > 0 && amount <= accountBalances[i]) {
                        accountBalances[i] -= amount;
                        cout << "Withdrawal successful! New balance: " << accountBalances[i] << endl;
                    } else {
                        cout << "Invalid amount or insufficient balance!" << endl;
                    }
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Account not found!" << endl;
            }
        } else if (choice == 4) {
            // Check account balance
            int accountNumber;
            bool found = false;

            cout << "\nEnter account number: ";
            cin >> accountNumber;

            for (int i = 0; i < totalAccounts; i++) {
                if (accountNumbers[i] == accountNumber) {
                    cout << "Account holder: " << accountNames[i] << endl;
                    cout << "Current balance: " << accountBalances[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Account not found!" << endl;
            }
        } else if (choice == 5) {
            cout << "Exiting the program. Thank you for using the Simple Banking System!" << endl;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
