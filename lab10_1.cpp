#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

int main()
{
    cout << "Press Enter 3 times to reveal your future.";
    for(int i = 0; i < 3; i++)
    {
        cin.get();
    }
    int grade;
    srand(time(0));
    grade = rand()%9 + 1;
    string g;

    switch(grade)
    {
        case 1 : g = "A" ; break;
        case 2 : g = "B+"; break;
        case 3 : g = "B"; break;
        case 4 : g = "C+" ; break;
        case 5 : g = "C" ; break;
        case 6 : g = "D+" ; break;
        case 7 : g = "D" ; break;
        case 8 : g = "F" ; break;
        case 9 : g = "W" ; break;
    }
    cout << "You will get "<< g <<" in this 261102.";
    return 0;
}