#include <iostream>
#include <string>

using namespace std;

class Counter {
private:
    int Starting_Number;
public:
    Counter() {
        this->Starting_Number = 1;
    }
    Counter(int Input) {
        this->Starting_Number = Input;
    }
    void Set_Starting_Number(int Input)
    {
            this->Starting_Number = Input;
    }
    void increase() { this->Starting_Number++; }
    void decrease() { this->Starting_Number--; }
    void show() { cout << this->Starting_Number << endl; }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Counter counter;
    string FirstAnswer;
    int Input = 0;
    cout << "Вы хотите указать начальное значение счётчика? Введите \"yes\" или \"no\": ";
    cin >> FirstAnswer;
    if (FirstAnswer == "yes") {
        cout << "введите начальное значение счетчика: ";
        cin >> Input;
        counter.Set_Starting_Number(Input);
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