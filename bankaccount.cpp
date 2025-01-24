z

#include <iostream>
#include <cstring>

using namespace std;

class Bankaccount
{
private:
    int id;
    string name;
    int bal;
    string ifsccode;

public:
    Bankaccount()
    {
        id = 100;
        name = "sushant";
        bal = 1600000;
        ifsccode = "SBI3456";
    }
    Bankaccount(int id, string name, int bal, string ifsccode)
    {
        this->id = id;
        this->name = name;
        this->bal = bal;
        this->ifsccode = ifsccode;
    }
    void setid(int id)
    {
        this->id = id;
    }
    int getid()
    {
        return id;
    }
    void setname(string name)
    {
        this->name = name;
    }
    string getname()
    {
        return name;
    }
    void setbal(int bal)
    {
        this->bal = bal;
    }
    int getbal()
    {
        return bal;
    }
    void setifsccode(string ifsccode)
    {
        this->ifsccode = ifsccode;
    }
    string getifsccode()
    {
        return ifsccode;
    }
    void withdraw(int amount)
    {
       if(amount > 0 && amount <= bal)
       {
           bal -= amount;
           cout << "Withdrawal successful" << endl;
           cout << "Remaining balance: " << bal << endl;
       }
       else
       {
           cout << "Withdrawal failed" << endl;
       }
    }
    void deposit(int amount)
    {
        if(amount > 0) {
            bal += amount;
            cout << "Deposit successful" << endl;
            cout << "New balance: " << bal << endl;
        }
        else
        {
            cout << "Invalid deposit amount" << endl;
        }
    }
    ~Bankaccount()
    {
        cout << "Object is deleted" << endl;
    }
    void display()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Bal: " << bal << endl;
        cout << "Ifsccode: " << ifsccode << endl;
    }
};

int main()
{
    Bankaccount b1(100, "Sushant", 1600000, "SBI3456");
    b1.display();

    b1.withdraw(5000);

    

    b1.deposit(500);

    return 0;
}
