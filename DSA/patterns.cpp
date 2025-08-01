#include <iostream>
using namespace std;

int halfPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int star(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int invertedStar(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int halfInvertedPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int charPyramid(int n, char ch)
{

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
}

int charInversePyramid(int n, char ch)
{

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i + 1; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
}

int hollowRectangle(int n){
    
}

int main()
{
    halfPyramid(5);
    halfInvertedPyramid(5);
    star(5);
    invertedStar(5);
    charPyramid(4, 'A');
    charInversePyramid(4, 'A');
    return 0;
}