/** Đề bài: Chuẩn hoá chuỗi: Nhập vào chuỗi
    Tại vị trí chẵn, các kí tự chữ cái được chuyển thành chữ hoa
    Tại vị trí lẻ, các kí tự chữ cái được chuyển hoá thành chữ thường
    Vị trí đầu tiên là 1
 */

#include <iostream>

using namespace std;

string chuanhoa (string s);

int main()
{
    string s;
    getline(cin , s);
    
    cout << chuanhoa (s) << endl;
    
    return 0;
}

char toupper(char ch)
{
    if (ch <='z' && ch >= 'a') {
        return char (int (ch-32));
    }
    return ch;
}

char tolower(char ch)
{
    if (ch <='Z' && ch >= 'A') {
        return char (int (ch+32));
    }
    return ch;
}


string chuanhoa (string s)
{
    unsigned long size = s.length();
    for (int i=0 ; i<size ; i+=2) {
        s[i] = tolower(s[i]);
    }
    
    for (int i=1 ; i<size ; i+=2) {
        s[i] = toupper(s[i]);
    }
    return s;
}
