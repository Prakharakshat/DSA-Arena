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

int hollowRectangle(int n = 5)
{
    cout << "*";
    for (int i = 0; i <= n; i++)
    {
        if (n > 4)
        {
        }
    }
    cout << "*";
}

int invertedAndRotatedHalfPyramid(int n)
{
    // n-i times space will be printed and
    // 1 to i times * will be printed
    for (int i = 0; i <= n; i++)
    {
        // for spaces
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int FloydsTriangle(int n, int num)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num;
            num++;
            cout << " ";
        }
        cout << endl;
    }
}

void diamondPattern(int n)
{
    if (n % 2 == 0)
    {
        cout << "Please enter an odd number." << endl;
        return;
    }

    int half = n / 2;

    // Top half
    for (int i = 0; i <= half; i++)
    {
        for (int j = 0; j < half - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half
    for (int i = half - 1; i >= 0; i--)
    {
        for (int j = 0; j < half - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int ButterflyPattern(int n)
{
}

int main()
{
    halfPyramid(5);
    halfInvertedPyramid(5);
    star(5);
    invertedStar(5);
    charPyramid(4, 'A');
    charInversePyramid(4, 'A');
    invertedAndRotatedHalfPyramid(4);
    FloydsTriangle(5, 1);
    diamondPattern(5);
    return 0;
}