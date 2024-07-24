#include <iostream>
using namespace std;

void add();
void sub();
void div();
void multi();
void calculator();
void evenOdd();
void process();
void factorial();
void table();
void primeCheck();
void nPrime();
void nFibonacci();
void armCheck();

int main(){
    string name = "guest";
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Hello, " << name << ". Welcome to our app!" << endl;
    process();
    cout << "\n Thank you, " << name << ". For using our app!" << endl;
    return 0;
}
//calculator methods starts
void add(){
    double firstNumber, lastNumber, ans;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> lastNumber;
    ans = firstNumber + lastNumber;
    cout << firstNumber << " + " << lastNumber << " = " <<ans << endl;
}
void sub(){
    double firstNumber, lastNumber, ans;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> lastNumber;
    ans = firstNumber - lastNumber;
    cout << firstNumber << " - " << lastNumber << " = " <<ans << endl;
}
void div(){
    double firstNumber, lastNumber, ans;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> lastNumber;
    ans = firstNumber / lastNumber;
    cout << firstNumber << " / " << lastNumber << " = " <<ans << endl;
}
void multi(){
    double firstNumber, lastNumber, ans;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> lastNumber;
    ans = firstNumber * lastNumber;
    cout << firstNumber << " x " << lastNumber << " = " <<ans << endl;
}
void calculator(){
    while (1) {
    int calcInput;
    cout << " \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Exit \n \n Choose an option: ";
    cin >> calcInput;
    switch (calcInput){
        case 1: add(); break;
        case 2: sub(); break;
        case 3: multi(); break;
        case 4: div(); break;
        case 5: process(); break;
        default: cout << "\n Invalid choide!" << endl;
        }
    }
}
//calculator methods ends

void evenOdd(){
    int num;
    cout << "Enter number to check Even or Odd: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " is an EVEN number" << endl;
    } else {
        cout << num << " is an ODD number" << endl;
    }
}

//main process here

void process(){
    while (1) {
       int input;
    cout << "\n All the available functions: \n \n 1. Calculator \n 2. Even or Odd \n 3. Factorial \n 4. Check Prime Number \n 5. N Prime Numbers \n 6. N Fibonacci \n 7. Multiplication Table \n 8. Check Armstrong Number \n 9. Exit \n \n Choose an option: " ;
    cin >> input;
    switch (input) {
        case 1: calculator(); break;
        case 2: evenOdd(); break;
        case 3: factorial(); break;
        case 4: primeCheck(); break;
        case 5: nPrime(); break;
        case 6: nFibonacci(); break;
        case 7: table(); break;
        case 8: armCheck(); break;
        case 9: return;
        default: cout << "Invalid choice! \n \n";
    }
    }
}
void factorial(){
    int num;
    int sum = 1;
    cout << "Enter a number to factor: ";
    cin >> num;
    for (int i = num; i >= 1; i--){
        sum *= i;
    }
    cout << num << "! = " << sum << endl;
}
void table() {
    int num;
    int sum = 1;
    cout << "Enter a number for multiplication table: ";
    cin >> num;

    for (int i = 1; i <=10; i++){
        sum = num * i;
        cout << num << " x " << i << " = " << sum << endl;
    }
}
void primeCheck(){
    int num;
    bool isPrime = true;
    cout << "Enter a number to check: ";
    cin >> num;

        for (int i = 2; i <=num-1; i++){
        if ( num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << num << " is a prime number \n";
    } else {
        cout << num << " is NOT a prime number \n";
    }
}
void nPrime(){
    int num;
    cout << "Enter the endpoint of prime numbers: ";
    cin >> num;

    for (int i = 2; i <= num; i++){
            bool isPrime = true;
        for (int j = 2; j*j <= i; j++ ){
            if ( i % j == 0) {
            isPrime = false;
            continue;
            }
        }
    if (isPrime){
        cout << i <<" ";}
    }
    cout << endl;
}
void nFibonacci(){
    int num;
    int firstNumber = 0;
    int lastNumber = 1;
    int sum;
    cout << "Enter how many fibonacci you want: ";
    cin >> num;

    for (int i=1; i <=num; i++){
        sum = firstNumber + lastNumber;
        cout << sum << " ";
        firstNumber = lastNumber;
        lastNumber = sum;
    }
}
void armCheck(){
    int num;
    int temp;
    int sum=0;
    cout << "Enter a number to armstrong check: ";
    cin >> num;
    temp = num;
    while (num > 0){
        int n = num % 10; // n = 3,5,1
        sum += n*n*n;
        num /= 10;
    }
    if (temp == sum){
        cout << temp << " is an armstrong number \n";
    } else {
        cout << temp << " is NOT an armstrong number \n";
    }
}

