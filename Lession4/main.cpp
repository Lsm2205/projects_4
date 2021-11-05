#include <iostream>
#include <vector>
#include <algorithm>
#include "ArrayInt.h"


/*Добавить в контейнерный класс, который был написан в этом уроке, методы:
для удаления последнего элемента массива (аналог функции pop_back() в векторах)
для удаления первого элемента массива (аналог pop_front() в векторах)
для сортировки массива
для вывода на экран элементов.*/

void Task1()
{
    ArrayInt array;
    array.push_back(5);
    array.push_back(3);
    array.push_back(2);
    array.push_back(16);
    array.push_back(8);
    array.push_back(7);
    array.push_back(9);
    array.push_back(9);
    array.push_back(8);
    array.push_back(8);


    std::cout << "Initial array:";
    array.print();

    array.pop_back();
    std::cout << "Array after pop_back:";
    array.print();

    array.pop_front();
    std::cout << "Array after pop_front:";
    array.print();

    array.sort();
    std::cout << "Sorted array:";
    array.print();
}

/*Дан вектор чисел, требуется выяснить, сколько среди них различных. Постараться использовать максимально быстрый алгоритм.*/

void printVector(std::vector<int>& input)
{
    std::cout << "\n";
    for (std::vector<int>::iterator it = input.begin(); it != input.end(); ++it)
        std::cout << *it << " ";
}
int countUniqueNumbers(std::vector<int> input)
{
    std::sort(input.begin(), input.end());
    std::vector<int>::iterator it;
    it = std::unique(input.begin(), input.end());
    input.resize(std::distance(input.begin(), it));
    //printVector(input); - test
    return input.size();
}


int main()
{
    Task1();

    
    std::vector<int> array = { 2, 3, 5, 6, 6, 6, 7, 6, 1, 1, 2, 11, 24, 5311};
    std::cout << "\nInitial array:";
    printVector(array);
    int count = countUniqueNumbers(array);
    std::cout << "\nUnique numbers: " << count;   

    
}
