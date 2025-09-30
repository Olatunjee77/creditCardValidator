# Credit card Validator
This code requests for users credit card number to verify if its valid or not implentingn the Luhn algorithm

## Luhn Algorithm
1- Start from the 2nd rightmost digit and move left.  
2- Double every second digit moving left.  
3- If doubling results in a number greater than 9, add the two digits of the result of the doubled digit. || getDigit(int digit)  
4- Sum the all the results from step 2 and 3. || sumEVenDigit(const string cardNumber){}  
5- Go back to the rightmost digit and sum every second digits left. || sumOddDigit(const string cardNumber){}  
6- Sum the results from 4 and 5.  
7- If the result is divisible by 10, the card number is valid, else, Its invalid.  

