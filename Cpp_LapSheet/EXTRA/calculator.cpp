#include <iostream>
#include <cmath>
#include <complex>
#include <vector>
#include <iomanip>
using namespace std;

double degToRad(double deg) { return deg * M_PI / 180; }
double radToDeg(double rad) { return rad * 180 / M_PI; }

int main()
{
    int choice;
    double x, y;

    do
    {
        cout << "\n========== SUPER CALCULATOR ==========\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power (x^y)\n";
        cout << "6. Square Root\n";
        cout << "7. Cube Root\n";
        cout << "8. Hypotenuse\n";
        cout << "9. Log (ln)\n";
        cout << "10. Log10\n";
        cout << "11. Exp (e^x)\n";
        cout << "12. Absolute Value\n";
        cout << "13. Ceil\n";
        cout << "14. Floor\n";
        cout << "15. Round\n";
        cout << "16. Truncate\n";
        cout << "17. Sin\n";
        cout << "18. Cos\n";
        cout << "19. Tan\n";
        cout << "20. Arcsin\n";
        cout << "21. Arccos\n";
        cout << "22. Arctan\n";
        cout << "23. fmod (remainder)\n";
        cout << "24. Min\n";
        cout << "25. Max\n";
        cout << "26. Average (mean)\n";
        cout << "27. Standard Deviation\n";
        cout << "28. Range (max - min)\n";
        cout << "29. Complex Addition\n";
        cout << "30. Complex Multiplication\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cin >> x >> y;
            cout << "Result = " << x + y << endl;
            break;

        case 2:
            cin >> x >> y;
            cout << "Result = " << x - y << endl;
            break;

        case 3:
            cin >> x >> y;
            cout << "Result = " << x * y << endl;
            break;

        case 4:
            cin >> x >> y;
            if (y == 0) cout << "Error: Division by zero\n";
            else cout << "Result = " << x / y << endl;
            break;

        case 5:
            cin >> x >> y;
            cout << "Result = " << pow(x, y) << endl;
            break;

        case 6:
            cin >> x;
            cout << "Result = " << sqrt(x) << endl;
            break;

        case 7:
            cin >> x;
            cout << "Result = " << cbrt(x) << endl;
            break;

        case 8:
            cin >> x >> y;
            cout << "Result = " << hypot(x, y) << endl;
            break;

        case 9:
            cin >> x;
            cout << "ln = " << log(x) << endl;
            break;

        case 10:
            cin >> x;
            cout << "log10 = " << log10(x) << endl;
            break;

        case 11:
            cin >> x;
            cout << "e^x = " << exp(x) << endl;
            break;

        case 12:
            cin >> x;
            cout << "|x| = " << fabs(x) << endl;
            break;

        case 13:
            cin >> x;
            cout << "ceil = " << ceil(x) << endl;
            break;

        case 14:
            cin >> x;
            cout << "floor = " << floor(x) << endl;
            break;

        case 15:
            cin >> x;
            cout << "round = " << round(x) << endl;
            break;

        case 16:
            cin >> x;
            cout << "truncate = " << trunc(x) << endl;
            break;

        case 17:
            cin >> x;
            cout << "sin = " << sin(degToRad(x)) << endl;
            break;

        case 18:
            cin >> x;
            cout << "cos = " << cos(degToRad(x)) << endl;
            break;

        case 19:
            cin >> x;
            cout << "tan = " << tan(degToRad(x)) << endl;
            break;

        case 20:
            cin >> x;
            cout << "arcsin (deg) = " << radToDeg(asin(x)) << endl;
            break;

        case 21:
            cin >> x;
            cout << "arccos (deg) = " << radToDeg(acos(x)) << endl;
            break;

        case 22:
            cin >> x;
            cout << "arctan (deg) = " << radToDeg(atan(x)) << endl;
            break;

        case 23:
            cin >> x >> y;
            cout << "fmod = " << fmod(x, y) << endl;
            break;

        case 24:
            cin >> x >> y;
            cout << "min = " << fmin(x, y) << endl;
            break;

        case 25:
            cin >> x >> y;
            cout << "max = " << fmax(x, y) << endl;
            break;

        case 26:
        {
            int n;
            cout << "Enter count: ";
            cin >> n;
            vector<double> a(n);
            for (auto &i : a) cin >> i;
            double sum = 0;
            for (double i : a) sum += i;
            cout << "Mean = " << sum / n << endl;
        }
        break;

        case 27:
        {
            int n;
            cout << "Enter count: ";
            cin >> n;
            vector<double> a(n);
            for (auto &i : a) cin >> i;

            double sum = 0;
            for (double i : a) sum += i;
            double mean = sum / n;

            double var = 0;
            for (double i : a) var += pow(i - mean, 2);
            var /= n;

            cout << "Standard Deviation = " << sqrt(var) << endl;
        }
        break;

        case 28:
        {
            int n;
            cout << "Enter count: ";
            cin >> n;
            vector<double> a(n);
            for (auto &i : a) cin >> i;
            double mn = a[0], mx = a[0];
            for (double v : a) {
                mn = fmin(mn, v);
                mx = fmax(mx, v);
            }
            cout << "Range = " << mx - mn << endl;
        }
        break;

        case 29:
        {
            double a, b, c, d;
            cout << "Enter complex 1 (real imaginary): ";
            cin >> a >> b;
            cout << "Enter complex 2 (real imaginary): ";
            cin >> c >> d;
            complex<double> z1(a, b), z2(c, d);
            cout << "Sum = " << z1 + z2 << endl;
        }
        break;

        case 30:
        {
            double a, b, c, d;
            cout << "Enter complex 1 (real imaginary): ";
            cin >> a >> b;
            cout << "Enter complex 2 (real imaginary): ";
            cin >> c >> d;
            complex<double> z1(a, b), z2(c, d);
            cout << "Product = " << z1 * z2 << endl;
        }
        break;

        case 0:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}