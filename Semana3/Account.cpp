#include <iostream>
#include "Account.h"
using namespace std;

int main(){
    Account account1{"Jane Green", 50};
    Account account2{"Jhon Blue", -7};

    cout << "account1: " << account1.getName() << " balance is $"
        << account1.getBlance();
    
    cout << "account2: " << account2.getName() << " balance is $"
        << account2.getBlance();
    
    cout << "\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount);

    cout << "\naccount1: " << account1.getName() << " balance is $"
        << account1.getBlance();

    cout << "\naccount2: " << account2.getName() << " balance is $"
        << account2.getBlance();
    
    cout << "\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);
    
    cout << "\naccount1: " << account1.getName() << " balance is $"
        << account1.getBlance();

    cout << "\naccount2: " << account2.getName() << " balance is $"
        << account2.getBlance() << endl;
}