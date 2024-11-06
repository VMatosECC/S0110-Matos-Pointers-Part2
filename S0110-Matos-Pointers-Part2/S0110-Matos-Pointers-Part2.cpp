// S0110-Matos-Pointers-Part2.cpp 

#include <iostream>
using namespace std;

void experiment01();
void experiment02();
void experiment03();
int* findLocationKey(int* pa, int na, int key);
void showArray(int* pa, int na, string caption);
int findLocationKey2(int* pa, int na, int key);

int main()
{
    experiment01();
    cout << "\nAll done!\n";
}
//------------------------------------------------------
void experiment01()
{
    //
    int na = 7;
    int* pa = new int[na] {40, 50, 20, 70, 11, 33, 17};

    int* pk = findLocationKey(pa, na, 70);
    int  ik = findLocationKey2(pa, na, 70);

    cout << "The value 70 was found at location " << pk << endl;
    cout << "The value 70 was found at index " << ik << endl;

    showArray(pa, na, "This is array pa");

    delete[] pa;
}

int* findLocationKey(int* pa, int na, int key)
{
    for (int i = 0; i < na; i++) {
        if (*(pa + i) == key) return (pa + i);
    }
    return nullptr;
}
//-----------------------------------------------------

int findLocationKey2(int* pa, int na, int key)
{
    for (int i = 0; i < na; i++) {
        if (*(pa + i) == key) return (i);
    }
    return -1;
}




void showArray(int* pa, int na, string caption)
{
    cout << caption << endl;
    for (int i = 0; i < na; i++)
    {
        cout << i << "\t" 
            << (pa + i) << "\t" 
            << *(pa + i) << endl;
    }
}