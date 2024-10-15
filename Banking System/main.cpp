#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>

using namespace std;

string accName;
string name;
string password;
string pass;
int accNum;
int accNumber;
int accDeposit;
int accWithdraw;
double accBalance;
int pin;
int userPin;


void accDetails()
{
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, accName);
    cout << "Create Password: ";
    cin >> password;
    cout<<"Create Pin:"<<endl;
    cin>>userPin;
    cout << "Enter Account Number: ";
    cin >> accNum;
    cout << "Enter Initial Balance:R";
    cin >> accBalance;
}
void accData()
{
    cout<<"Enter Account Name: "<<endl;
    cin>>name;
    cout<<"Enter Account Number: "<<endl;
    cin>>accNumber;
    cout<<"Enter password"<<endl;
    cin>>pass;
    if (name==accName && accNumber==accNum && pass==password)
    {
        cout<<"Access Granted."<<endl;
        cout << "Account Name is: "<< accName <<endl;
        cout << "Account Number is: " << accNum <<endl;
        cout << "Account Balance is:R " << accBalance <<endl;
    }
    else
    {
        cout<<"Invalid Pin"<<endl;
    }
}
void deposit()
{
    cout<<"Enter Account Name: "<<endl;
    cin>>name;
    cout<<"Enter Account Password: "<<endl;
    cin>>pass;
    cout<<"Enter Pin"<<endl;
    cin>>pin;
    if (name==accName && pass==password && pin == userPin)
    {
        cout << "Enter Amount you want to Deposit:R ";
        cin >> accDeposit;
        accBalance = accBalance + accDeposit;
        cout << "Your Current Balance is:R "<< accBalance <<endl;
    }
    else
    {
        cout<<"Invalid Details"<<endl;
    }
}
void balance()
{
    cout<<"Enter Account Name: "<<endl;
    cin>>name;
    cout<<"Enter Account Password: "<<endl;
    cin>>pass;
    cout<<"Enter Pin"<<endl;
    cin>>pin;
    if (name==accName && pass==password && pin == userPin)
    {
       cout << "Account Number: " << accNum<<endl;
       cout << "Your Account Balance is:R " << accBalance <<endl;
    }
    else
    {
        cout<<"Invalid Pin"<<endl;
    }
}
void withdraw()
{
    cout<<"Enter Account Name: "<<endl;
    cin>>name;
    cout<<"Enter Account Password: "<<endl;
    cin>>pass;
    cout<<"Enter Pin"<<endl;
    cin>>pin;
    if (name==accName && pass==password && pin == userPin)
    {
        cout << "Enter the amount you want withdraw:R ";
        cin >> accWithdraw;
        accBalance = accBalance - accWithdraw;
        cout << "Your current balance is:R "<< accBalance <<endl;
    }
    else
    {
        cout<<"Invalid Pin"<<endl;
    }
}

int main()
{
    int choice;
    while (1)
    {
        cout << "\n[1] Enter Account Details ";
        cout << "\n[2] View Account Details ";
        cout << "\n[3] Deposit ";
        cout << "\n[4] View Balance ";
        cout << "\n[5] Withdraw ";
        cout << "\n[6] Exit ";
        cout << "\nEnter your Option: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                accDetails();
                break;
            case 2:
                accData();
                break;
            case 3:
                deposit();
                break;
            case 4:
                balance();
                break;
            case 5:
                withdraw();
                break;
            case 6:
                exit(1);
                break;
            default:
                cout << "\n Invalid Option:";
        }
    }
    return 0;
}
