#include <iostream>
#include <string>

using namespace std;

int getDigit(int digit){
    return (digit % 10) + (digit / 10 % 10); //To help get the sigle digits and splits the ones that give two digits after doubling.

}

int sumEvenDigits(const string cardNumber){
    int sum = 0;
    for (int i =cardNumber.size() - 2; i >= 0; i-=2){
        sum = sum + getDigit(2 * (cardNumber[i] - '0'));
    }
    return sum;
}

int sumOddDigits(const string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() -1; i >= 0; i -=2){
        sum = sum + getDigit(cardNumber[i] - '0');
    }
    return sum;
}


int main(){
     string cardNumber;
     int result; 

     cout << "Enter your card number: ";
     cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    
    if (result % 10 == 0){
        cout << "The card number is valid." << endl;
    } else {
        cout << "The card number is not valid." << endl;
    }

    return 0;
}