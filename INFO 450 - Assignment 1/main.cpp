//
// INFO 450 - Assignment 1
// September 19, 2019
// Nydia Tapia
//

#include <iostream>
using namespace std;

int main()
{
    // withdrawAmount is the amount the user wants to withdraw
    // Dollar denominations split up: fiftyDollar, twentyDollar, tenDollar, fiveDollar, oneDollar
    // Declaring this variable as 'y' to avoid an error (answer is intialized)
    int withdrawAmount = 0;
    int fiftyDollar, twentyDollar, tenDollar, fiveDollar, oneDollar;
    char answer = 'y';
    
    
    //Do-while Loop with if-else statements nested
    do {
        
        //Ask the user to enter their withdrawal request amount
        cout <<  "Please enter withdrawal amount --> " << endl;
        cin >> withdrawAmount;
        
        
        //If/Else Statement for validating input is between 1 and 300
        if (withdrawAmount > 0 && withdrawAmount < 301) {
            
            //Confirms withdrawal request
            cout << "Withdrawal amount: $" << withdrawAmount << endl;
            
            
            if (withdrawAmount >= 50)
            {
                //Divide withdrawal amount by 50 to get the total amount of 50 dollar bills to be dispensed to the user
                fiftyDollar = (withdrawAmount / 50);
                cout << "You have "  << fiftyDollar << " $50 dollar bills." << endl;
                //Figure out remaining amount to be withdrawn to user after taking out $50 bills
                withdrawAmount %= 50;
            }
            
            
            // If 20 or more dollars are remaining to be withdrawn
            if (withdrawAmount >= 20)
            {
                //Divide remainder to be withdrawn by 20 to get the total amount of 20 dollar bills to be dispensed to the user
                twentyDollar = (withdrawAmount / 20);
                cout << "You have " << twentyDollar << " $20.00 bills." << endl;
                //Figure out remaining amount to be withdrawn to user after taking out $20 bills
                withdrawAmount %= 20;
            }
            
            
            // If 10 or more dollars are remaining to be withdrawn
            if (withdrawAmount >= 10) {
                //Divide remainder to be withdrawn by 10 to get the total amount of $10 bills to be dispensed to the user
                tenDollar = (withdrawAmount / 10);
                cout << "You have " << tenDollar << " $10.00 bills." << endl;
                //Figure out remaining amount to be withdrawn to user after taking out $10 bills
                withdrawAmount %= 10;
            }
            
            
            // If 5 or more dollars are remaining to be withdrawn
            if (withdrawAmount >= 5) {
                //Divide remainder to be withdrawn by 5 to get the total amount of $5 bills to be dispensed to the user
                fiveDollar = (withdrawAmount / 5);
                cout << "You have " << fiveDollar << " $5.00 bills." << endl;
                //Figure out remaining amount to be withdrawn to user after taking out 5 dollar bills
                withdrawAmount %= 5;
            }
            
            
            // If 1 or more dollars are remaining to be withdrawn
            if (withdrawAmount >= 1) {
                //Remainder to be withdrawn is the amount of oneDollar so no division needed here
                oneDollar = withdrawAmount;
                cout << "You have " << oneDollar << " $1.00 bills." << endl;
                // Sets withdrawAmount to 0, nothing left to withdraw after this
                withdrawAmount %= oneDollar;
            }
            
            // Once the amount left to withdraw = 0 , ask the user if they want to make another withdrawal
            if (withdrawAmount == 0) {
                // Exit Statement, if Y then returns to beginning of do loop
                cout << "Would you like to make another withdrawal?" << endl;
                cout << "Enter Y or y to continue..." << endl;
                cin >> answer;
            }
            
        }
        
        else if (withdrawAmount > 300)
        {
            //If users intial withdrawal request is over $300 bills, enter error message and ask if the user wants to try again
            cout  << "Sorry the max amount you can withdraw is $300.00"  << endl;
            cout << "Want to try again? Enter Y or y to continue..."  << endl;
            cin >> answer;
            
        }
        
        // Otherwise, if intial withdrawal request is under $1, error message and ask the use if they want to try again
        else
        {
            cout  << "Sorry the min amount you can withdraw is $1.00"  << endl;
            cout << "Want to try again? Enter Y or y to continue..."  << endl;
            cin >> answer;
        }
        
        // To make sure to accept both answers "Y" and "y"
    } while ((answer == 'Y') || (answer == 'y'));
    
    return 0;
}
