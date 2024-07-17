#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> List = { 30, 20, 10, 50, 40 };
    int max = *max_element(List.begin(), List.end());
    cout << "The maximum element in the list is : " << max
         << endl;

    return 0;
}