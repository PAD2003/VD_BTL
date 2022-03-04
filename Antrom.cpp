#include <iostream>

using namespace std;

void inputarray (int array[], int size);
int max (int a, int b);

//C1: Dùng mảng
int main()
{
    int n;
    cin >> n;
    
    int array [n];
    inputarray(array, n);
    
    int m1=0, m2=array[0], m3;
    for (int i=1 ; i<n ; i++) {
        m3 = max(m1+array[i], m2);
        m1 = m2;
        m2 = m3;
    }
    
    cout << m3 << endl;
    
    return 0;
}

void inputarray (int array[], int size)
{
    for (int i=0; i<size; i++){
        cin >> array[i];
    }
}

int max (int a, int b)
{
    if (a>b) {
        return a;
    }else{
        return b;
    }
}

// C2: Dùng 3 ẩn luân phiên
void main2()
{
    int n;
    cin >> n;
    
    int x;
    cin >> x;
    
    int m1=0, m2=x, m3;
    
    while (--n) {
        cin >> x;
        m3 = max (m1+x,m2);
        m1=m2;
        m2=m3;
    }
    
    cout << m3 << endl;
}
