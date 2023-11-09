// Design a banking system to handle account transactions. The system should allow users to deposit and withdraw money from their accounts. Each account is associated with an account holder's name, account number, and balance. Implement the system using a union named "AccountData" that contains a structure with fields for the account holder's name, account number, and balance. Define functions to deposit and withdraw money from the account.


// Note: This is a sample question asked in a Wipro interview.
// Input format :

// The first line consists of the account holder's name (up to 50 characters).

// The second line consists of the account number (an integer).

// The third line consists of the initial balance (a floating-point number).

// The fourth line consists of the amount to deposit (a floating-point number).

// The fifth line consists of the amount to withdraw (a floating-point number).
// Output format :

// If a deposit is successful, it says "Amount deposited successfully."

// If a withdrawal is successful, it says "Amount withdrawn successfully."

// If a withdrawal fails due to insufficient balance: "Insufficient balance. Withdrawal failed."

// The account details are displayed in the following format:

// "Account holder's name: [account holder's name]"

// "Account number: [account number]"

// "Balance: [balance]"


// Refer to sample input and output specifications
// Code constraints :

// The account holder's name should not exceed 50 characters.

// The account number should be a positive integer.

// The initial balance, deposit amount, and withdrawal amount should be non-negative floating-point numbers.
// Sample test cases :
// Input 1 :

// John Doe
// 123456
// 5000
// 1000
// 500

// Output 1 :

// Amount deposited successfully.
// Amount withdrawn successfully.
// Account details:
// Account holder's name: John Doe
// Account number: 123456
// Balance: 5500

// Input 2 :

// Alice Smith
// 987654
// 8000
// 1500
// 10000

// Output 2 :

// Amount deposited successfully.
// Insufficient balance. Withdrawal failed.
// Account details:
// Account holder's name: Alice Smith
// Account number: 987654
// Balance: 9500


#include <iostream>
#include <string>
using namespace std;

struct AccountInfo {
    string holderName;
    int accountNumber;
    double balance;
};

struct AccountData {
    AccountInfo info;
    void deposit(AccountData& account, double amount) {
        account.info.balance += amount;
        cout << "Amount deposited successfully." << endl;
    }
    void withdraw(AccountData account, double amount) {
        if (account.info.balance >= amount) {
            account.info.balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }
};

int main() {
    AccountData account;
    cin >> account.info.holderName >> account.info.accountNumber >> account.info.balance;
    double depositAmount, withdrawAmount;
    cin >> depositAmount >> withdrawAmount;
    account.deposit(account, depositAmount);
    account.withdraw(account, withdrawAmount);
    cout << "Account details:" << endl;
    cout << "Account holder's name: " << account.info.holderName << endl;
    cout << "Account number: " << account.info.accountNumber << endl;
    cout << "Balance: " << account.info.balance << endl;
    return 0;
}
