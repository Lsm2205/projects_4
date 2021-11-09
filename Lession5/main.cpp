#include <iostream>


//Реализовать шаблон класса Pair1, который позволяет пользователю передавать данные одного типа парами.
template <class T>
class Pair1
{
private:
    T a, b;
public:
    Pair1(T input1,T input2)
        : a(input1), b(input2){};

    T first() const
    {
        return a;
    }

    T second() const
    {
        return b;
    }
};

//Реализовать класс Pair, который позволяет использовать разные типы данных в передаваемых парах.

template <typename T1, typename T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    Pair(){}
    Pair(T1 inputA, T2 inputB)
        : a(inputA), b(inputB) {}

    T1 first() const
    {
        return a;
    }

    T2 second() const
    {
        return b;
    }
};



int main()
{
    

    Pair1<int> p1(6, 9);
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair1<double> p2(3.4, 7.8);
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    

    Pair<int, double> p3(6, 7.8);
    std::cout << "Pair: " << p3.first() << ' ' << p3.second() << '\n';

    const Pair<double, int> p4(3.4, 5);
    std::cout << "Pair: " << p4.first() << ' ' << p4.second() << '\n';

    
    return 0;
}


