#include <iostream>
using namespace std;

int main(){
    int checkAccountBalance, withdraw, deposit,rechargeAirtime, payBills,  choose, amount, answer;
    int password = 193845, pin;
    int accountNumber = 28772434, accNum;
    int availableBalance = 300000;
    cout << "Welcome to an Atm machine..." << endl << "Enter your Account Number: " ;
    cin >> accNum;
    cout << "Enter your password: ";
    cin >> pin;
    if (password == pin && accountNumber == accNum)
    {
        cout << " Choose from the following options \n 1 - check account balance \n 2 - deposit \n 3 -  withdraw \n 4 - recharge airtime \n 5 - pay bills \n 6 - cancel \n";
        cin >> choose;
        switch (choose)
        {
        case 1:
            cout << accountNumber << " Your account balance is " << availableBalance;
            break;
        case 2:
            cout << " Sorry the service is unavalable, try again later." ;
            break;    
        case 3:
            cout << "Choose from the following options \n 500 \n 1000 \n 2000 \n 5000 \n 10000 \n 50000 \n ";
            cin >> amount;
            cout << "You've successfully redraw " << amount << endl
                 << "Check account balance \n 1. yes \n 2. no \n";
            cin >> choose;
            if (choose == 1)
            {
                answer = availableBalance - amount;
                cout << " Your avalable balance is" << answer << endl;
            }
            else if (choose == 2)
            {
                cout << "Thank you for banking with us. ";
            }
            else
            {
              cout << "Wrong input";
            }
            
            break;
        case 4:
            cout << "Input amount to recharge and press enter: " ;
            cin >> amount;
            cout << "Your recharge of " << amount << "is successful";
            break;
         case 5:
            cout << "Choose from the following options \n 1. nepa \n 2. dstv \n 3. water cooperation  \n";
            cin >> choose;
            if (choose == 1)
            {
                cout << "Enter amount and press your enter key";
                cin >> amount;
                cout << " You have suceeded in paying " << amount << " for your nepa bill";
            }
            else if (choose == 2)
            {
                cout << "Enter amount and press your enter key ";
                cin >> amount;
                cout << " You have suceeded in paying " << amount << " for your dstv bill";
            }
             else if (choose == 3)
            {
                cout << "Enter amount and press your enter key ";
                cin >> amount;
                cout << " You have suceeded in paying " << amount << " for your water cooperation bill";
            }
            else
            {
                cout << "Wrong input";
            }
            
            break;    
        case 6:
            cout << "Thank you for banking with us. ";
            break;       
        default:
            break;
        }

    } else {
        cout << "Wrong Account Number or Password.";
    }
    
    return 0;
}