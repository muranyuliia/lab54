#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double R, x, y;
    cout << "������ �������� R: ";
    cin >> R;
    cout << "������ ���������� x: ";
    cin >> x;
    cout << "������ ���������� y: ";
    cin >> y;

    // ���������� ������ �� ����� (x, y) �� ������ ��������� (0, 0)
    double distance = sqrt(pow(x,2)-pow(y,2));

    // ��������, �� ����� (x, y) ������ � ����������� ������� ������
    if (distance <= R && x <= 0 && y >= 0 && x + y >= R) 
     
    {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}