#include <iostream>

#include <iomanip>
using namespace std;

int main() {

int masa;

double wzrost;
void obliczBMI(int, double);

cout<<"Masa"<<  endl;
cout<<"Wzrost"<< endl;
cin >> masa >> wzrost;

obliczBMI(masa, wzrost);

return 0;

}

void obliczBMI(int m, double w) {
double BMI = m / (w * w);

cout << setprecision(6) << BMI << endl;
    
if(BMI > 30)

cout << "OTYLOSC";

else if (BMI <= 30 && BMI > 25)

        cout << "NADWAGA";

    else if (BMI <= 25 && BMI >= 20)

        cout << "NORMA";

    else

        cout << "NIEDOWAGA";

}
