#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int chu(int a);

int main() {
    string str[10000];
    string str1;
    int i = 0;
    int num1;
    int num;
    do {
        getline(cin, str1);
        str[i] = str1;
        i++;
    } while (str[i - 1] != "0");

    for (int j = 0; j <= i - 2; j++) {
         num = stoi(str[j]) ;
         num1 = num + 1;

         while (chu(num) != chu(num1)) {
             num1++;
         }
        cout << num1<<"\n";
    }

    return 0;
}

int chu(int a) {
    int k = 0;
    while (a != 0) {
        if (a % 2 != 0) {
            k = k + 1;
        }
        a = a/2;
    }
    return k;
}
