#include <iostream>
#include <string>

using namespace std;

class Counter {
private:
    int Starting_Number = 1;
public:
    Counter(int Input) {
        this->Starting_Number = Input;
    }
    Counter() {}
    void increase() { this->Starting_Number++; }
    void decrease() { this->Starting_Number--; }
    void show() { cout << this->Starting_Number << endl; }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Counter counter;
    string FirstAnswer;
    cout << "Вы хотите указать начальное значение счётчика? Введите \"yes\" или \"no\": ";
    cin >> FirstAnswer;
    if (FirstAnswer == "yes") {
        cout << "введите начальное значение счетчика: ";
        int Input;
        cin >> Input;
        counter = Counter(Input);
    }
    string UserCommand= " ";
    while (UserCommand != "close")
    {
        cout << "Введите команду (\"+\", \"-\", \"=\" или \"close\"): ";
        cin >> UserCommand;
        if (UserCommand == "+") {
            counter.increase();
        }
        else if (UserCommand == "-") {
            counter.decrease();
        }
        else if (UserCommand == "=") {
            counter.show();
        }
    }
    cout << "До свидания!";
}