#include <iostream>
#include <list>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    list<int> numbers;
    int num;
    cout << "The number are: ";
    for (int i = 0; i < 5; i++)
    {
        num = rand() % 50 + 1;
        numbers.push_back(num);
    }
    for (int num : numbers)
        cout << num << " ";
    cout << '\n';
    cout << "The firs element: " << numbers.front() << endl;
    cout << "The last element: " << numbers.back() << endl;
    int first = numbers.front();
    numbers.pop_front();
    cout << "After remove first element: ";
    for (int num : numbers)
        cout << num << " ";
    numbers.push_back(first);
    cout << "\nAfter add first element to the end: ";
    for (int num : numbers)
        cout << num << " ";
    cout << '\n';

    list<string> lFood = {"pizza", "apple", "rice", "egg", "burger"};
    cout << "\nThe food are: ";
    for (string food : lFood)
        cout << food << " ";
    cout << '\n';
    cout << "The firs element: " << lFood.front() << endl;
    cout << "The last element: " << lFood.back() << endl;
    string f = lFood.front();
    lFood.pop_front();
    cout << "After remove first element: ";
    for (string food : lFood)
        cout << food << " ";
    lFood.push_back(f);
    cout << "\nAfter add first element to the end: ";
    for (string food : lFood)
        cout << food << " ";
    cout << '\n';
}