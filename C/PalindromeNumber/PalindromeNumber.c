#include <stdio.h>
# include <math.h>
bool isPalindrome(int x) {
    long int y = x, y1 = x, y2 = x;
    long int result1 = 0, result2 = 0;
    if(y < 0) {return -y;}
    int length = 0;
    //ȷ��λ��
    while(y > 0) {
        y /= 10;
        length++;
    }
    if(y % 2 == 0) { //ż��
        y1 = y1 / (pow(10, length/2));
        while(length/2 > 0) {
            result1 = result1 * 10 + y1 % 10;
            y1 /= 10;
            length--;
        }
        result1 =

    }
    //δ�����������
    if(x == result) {
        return true;
    } else {
        return false;
    }
}
