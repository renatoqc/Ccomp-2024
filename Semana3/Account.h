#include <string>
#include <iostream>
using namespace std;

class Account {
    public:
    Account(string accountName, int initialBalance)
    : name{accountName}{

        if(initialBalance > 0){
            balance = initialBalance;
        }
    }

    void deposit(int depositAmount){
        if(depositAmount > 0){
            balance = balance + depositAmount;
        }
    }

    int getBlance() const{
        return balance;
    }

    void setName(string accountName){
        name = accountName;
    }

    string getName() const{
        return name;
    }

    private:
    string name;
    int balance;
};