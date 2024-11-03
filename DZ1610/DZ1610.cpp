#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    setlocale(LC_ALL, "RU");
    const int SIZE = 10;
    int arr[SIZE];

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int i = 0; i < SIZE; ++i) {
        arr[i] = std::rand() % 100 + 1;
    }

    std::cout << "Рандомный массив : ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int minElement = arr[0];
    int maxElement = arr[0];

    for (int i = 1; i < SIZE; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    std::cout << "Минэлемент: " << minElement << std::endl;
    std::cout << "Макс элемент: " << maxElement << std::endl;

    return 0;
}


//--------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <ctime> 

int main() {
    setlocale(LC_ALL, "RU");
    int size;
    int mindiapazon, maxdiapazon;
    int threshold;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    std::cout << "Введите Min значение диапазона: ";
    std::cin >> mindiapazon;

    std::cout << "Введите Max значение диапазона: ";
    std::cin >> maxdiapazon;

    std::cout << "Введите пороговое значение: ";
    std::cin >> threshold;

    if (mindiapazon >= maxdiapazon) {
        std::cerr << "Ошибка: min значение должно быть < max." << std::endl;
        return 1;
    }

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int* arr = new int[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = std::rand() % (maxRange - minRange + 1) + minRange;
    }

    std::cout << "Сгенерированный массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < threshold) {
            sum += arr[i];
        }
    }

    std::cout << "Сумма элементов, меньших " << threshold << ": " << sum << std::endl;

    delete[] arr;

    return 0;
}