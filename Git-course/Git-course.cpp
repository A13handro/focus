#include <iostream>

int main(){
    setlocale(LC_ALL, "RU");

    //Поле 
    char position[]{ '_', '_', '_', '_', '_', '_', '_', '_', '_', '_'};
    
    pole(0, 0, position);

    for (int i = 0; i < 9; i++) {
        int a, b;
        if (i % 2 == 0){
            pole(0, a * b, position);
        cout << "Ход ноликов: строка: ";
        cin >> a;
        cout << "Ход ноликов: столбец: ";
        cin >> b;
    }
        else {
            pole(a * b, 0, position);
            cout << "Ход крестиков: строка: ";
            cin >> a;
            cout << "Ход крестиков: столбец: ";
            cin >> b;
        }
    }

    std::cout << "Hello World!\n";

    return 0;
}
