/*Прогрмма по нахождению площади потём ввода периметра*/
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int s;
    int p;
    cin >> p;
    s = pow(
        p / 4, 2);
    cout << s << endl;
    return 0;
}