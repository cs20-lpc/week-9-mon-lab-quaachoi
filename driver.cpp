#include "LinkedQueue.hpp"
#include <iostream>

using namespace std;

int main()
{
    LinkedQueue<int>* lQueue = new LinkedQueue<int>();

    lQueue->enqueue(1);
    lQueue->enqueue(2);

    cout << lQueue->front() << endl;
    cout << lQueue->back() << endl;

    return 0;
}