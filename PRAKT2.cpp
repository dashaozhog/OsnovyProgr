#include <iostream>
using namespace std;

/*Задача 1
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter side " << i + 1<<endl;
        cin >> arr[i];
    }
    if (arr[0]+arr[1]>arr[2] and arr[0]+arr[2]>arr[1] and arr[1] + arr[2] > arr[1]) {
        cout << "yes.";
    }
    else {
        cout << "no.";
    }
}
*/

/*Задача 2
int main() {
    int n1 = 1;
    int n2 = 2;
    int n3 = 3;
    if (n2 - n1 == 1 and n3 - n2 == 1) {
        cout << "horizontal"; }
    else if (n2 - n1 == 3 and n3 - n2 == 3) {
        cout << "vertical";
    }
    else {
        if ((n2 - n1 == 4 and n3 - n2 == 4) or (n2 - n1 == 2 and n3 - n2 == 2)) {
            cout << "diagonal";
        }
        else {
            cout << "none";
        }
    }
}
*/

/*Задача 3

int main() {
    int currency;
    int value;
    cout << "how many UAH do you have?";
    cin >> value;
    cout << "enter currency you need(1 - USD, 2 - EUR, 3 - GBP)";
    cin >> currency;
    switch (currency) {
    case 1:
        cout << "Converted to " << value / 41.17 << "USD";
        break;
    case 2:
        cout << "Converted to " << value / 48.67 << "EUR";
        break;
    case 3:
        cout << "Converted to " << value / 56.14 << "GBP";
        break;
    }
}
*/

/*Задача 4
int main() {
    int num1;
    int num2;
    char oper;
    cout << "enter 1st number:" << endl;
    cin >> num1;
    cout << "choose operation(+,-,*,/) \n";
    cin >> oper;
    cout << "enter 2nd number:" << endl;
    cin >> num2;
    float flnum2 = static_cast<float>(num2);
    switch (oper) {
    case '+':
        cout << num1 + flnum2;
        break;
    case '-':
        cout << num1 - flnum2;
        break;
    case '*':
        cout << num1 * flnum2;
        break;

    case '/':
        if (num2 !=0){
        cout << num1 / flnum2;

        }
        else {
            cout << "Error: zero division!!!";
        }
        break;
    }
}*/

/*Задача 5
int main() {
    int month;
    cout << "Enter your month!\n";
    cin >> month;
    if (month >= 1 and month <= 12) {
        switch (month) {
        case 12:
            cout << "winter!";
            break;
        case 1:
            cout << "winter!";
            break;
        case 2:
            cout << "winter!";
            break;
        case 3:
            cout << "spring!";
            break;
        case 4:
            cout << "spring!";
            break;
        case 5:
            cout << "spring!";
            break;
        case 6:
            cout << "summer!";
            break;
        case 7:
            cout << "summer!";
            break;
        case 8:
            cout << "summer!";
            break;
        case 9:
            cout << "autumn!";
            break;
        case 10:
            cout << "autumn!";
            break;
        case 11:
            cout << "autumn!";
            break;
        }
    }
    else {
        cerr << "invalid month.";
    }
}*/

/*Задача 6

int main() {
    int grade;
    cout << "enter your grade: \n";
    cin >> grade;
    char litgrade;
    if (grade >= 90 and grade <= 100) {
        litgrade = 'A';
        cout << litgrade<<endl;
    }
    else if (grade >= 80 and grade < 90) {
        litgrade = 'B';
        cout << litgrade << endl;
    }
    else {
        if (grade >= 70 and grade < 80) {
            litgrade = 'C';
            cout << litgrade << endl;
        }
        else if (grade >= 60 and grade < 70) {
            litgrade = 'D';
            cout << litgrade << endl;
        }
        else {
            if (grade >= 0 and grade < 60) {
                litgrade = 'F';
                cout << litgrade << endl;
            }
            else {
                cout << "invalid" << endl;
                return 0;
            }
        }
    }
    switch (litgrade) {
    case 'A':
        cout << "Vidminno";
        break;
    case 'B':
        cout << "Dobre";
        break;
    case 'C':
        cout << "Zadovilno";
        break;
    case 'D':
        cout << "Pohano";
        break;
    case 'F':
        cout << "Nezadovilno";
        break;
    }
}*/

/*Задача 7

int main() {
    int km = 10;
    int i = 0;
    while (km < 25) {
        km += km * 0.10;
        i++;
    }
    cout << i;
}*/

/*Задача 8
int main() {
    int x;
    int y;
    
    cout << "Enter x: \n";
    cin >> x;
    int res=x;
    cout << "Enter y: \n";
    cin >> y;
    for (int i=1; i < y; i++) {
        res *= x;
    }
    cout << res;

}*/

/*Задача 9
int main() {
    int height;
    cout << "Enter piramyd height: \n";
    cin >> height;
    for (int row = 0; row <= height; row++) {
        for (int col = 0; col < (row * 2 - 1); col+=1) {
            cout << "*";
        }
        cout << "\n";
    }

}*/
