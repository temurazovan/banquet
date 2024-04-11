#include <iostream>

int main() {
    int cutlery[2][6] = {{4, 3, 3, 3, 3, 3},
                         {4, 3, 3, 3, 3, 3}};
    int dishes[2][6] = {{3, 2, 2, 2, 2, 2},
                        {3, 2, 2, 2, 2, 2}};
    int chairs[2][6] = {{1, 1, 1, 1, 1, 1},
                        {1, 1, 1, 1, 1, 1}};
    chairs[1][5] += 1; //на первый ряд пятое место был добавлен один стул для дамы с ребенком
    cutlery[2][3] -= 1; // украдена ложка со второго ряда третьего места
    cutlery[0][1] -= 1; // vip поделился ложкой
    cutlery[2][3] += 1; // ложка вернулась
    dishes[0][0] -= 1; //официант забрал десертную тарелку

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 6; j++){
            std::cout << cutlery[i][j];
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 6; j++){
            std::cout << dishes[i][j];
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 6; j++){
            std::cout << chairs[i][j];
        }
        std::cout << std::endl;
    }
}
