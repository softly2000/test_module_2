#include <iostream>

using namespace std;

int calculate(float parameter) {
    
    if (parameter == 10 || parameter == 20) {
       int result = 12 * parameter;
       cout << "результат: " << result << endl;
    return 10;
    } else return 11;
}

int main() 
{
    float parameter;
    cout << "Ввод параметров = ";
    cin >> parameter;

    int code = calculate(parameter);
    cout << "Код: " << code << endl;

    if (code == 10) 
    cout << "Результат выполнен!" << endl;
    else cout << "Результат не выполнен!";
}