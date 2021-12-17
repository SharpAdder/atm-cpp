//ATM FUNCTIONALITY:
//1.Check balance; 2. deposit cash; 3. withdraw cash, 3.show menu to user


#include <iostream>
using namespace std;

//show menu function: with options for user(check balance, deposit & withdraw)
void showMenu() {
    cout << "---------MENU-------" << endl;
    cout << "  1.Check Balance" << endl;
    cout << "  2.Deposit cash" << endl;
    cout << "  3.Withdraw cash" << endl;
    cout << "  4.Exit" << endl;
    cout << "--------------------" << endl;
}


int main()
{
    //declare option var for user
    int option;
    //declare balance variable for opton 1
    double balance = 500;

    
    
    //repeat: showing the menu, asking for input & the switch case until user enters value 4 in order to exit the program
    do
    {
        //call showMenu function
        showMenu();
        cout << "Option "; cin >> option;
        //clearnig the console after each option
        system("cls");


        switch (option) {
        case 1: cout << "Balance is: " << balance << "$" << endl;break;
        case 2: cout << "Deposit cash: ";
            double depositCash; //money to be deposited
            cin >> depositCash; //ask user to insert a value to deposit
            balance += depositCash; //the new balance
            break;
        case 3: cout << "Withdraw cash: ";
            double withdrawCash; //money to be withdraw
            cin >> withdrawCash; //ask user to insert a value to withdraw

            if (withdrawCash <= balance)
                balance -= withdrawCash; //the new balance
            else
                cout << "Not enough money" << endl;
            break;
        }
    } while (option !=4);
    
    system("pause>0");
}

