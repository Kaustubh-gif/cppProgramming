#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int id;
    string name;
    int balance;
    string IFSC;

public:
    // Default Constructor
    BankAccount()
    {
        id = 0;
        name = "Unknown";
        balance = 0;
        IFSC = "Unknown";
    }

    // Parameterized Constructor
    BankAccount(int id, string name, int balance, string IFSC)
    {
        this->id = id;
        this->name = name;
        this->balance = balance;
        this->IFSC = IFSC;
    }

    // Getter and Setter Methods
    int getId()
    {
        return id;
    }

    void setId(int id)
    {
        this->id = id;
    }

    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    int getBalance()
    {
        return balance;
    }

    void setBalance(int balance)
    {
        this->balance = balance;
    }

    string getIFSC()
    {
        return IFSC;
    }

    void setIFSC(string IFSC)
    {
        this->IFSC = IFSC;
    }

    // Withdraw Method
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    // Deposit Method
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Display Account Details
    void display()
    {
        cout << "ID: " << id << "\nName: " << name << "\nBalance: " << balance << "\nIFSC: " << IFSC << endl;
    }
};

int main()
{
    // Create a BankAccount object using the parameterized constructor
    BankAccount account(1, "John Doe", 10000, "IFSC1234");

    // Display initial details
    account.display();

    // Test deposit and withdraw methods
    account.deposit(5000);
    cout << "Current Balance: " << account.getBalance() << endl;

    account.withdraw(500);
    cout << "Current Balance: " << account.getBalance() << endl;

    return 0;
}
