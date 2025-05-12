#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;
// int main() {
//     
//     srand(time(0));

//     //  1
//     cout << "Завдання 1\n";
//     int arr1[10];
//     fillArray(arr1, 10, -20, 20);
//     int sum = 0;
//     for (int i = 0; i < 10; i++) {
//         sum += arr1[i];
//         cout << arr1[i] << " ";
//     }
//     cout << "\nСума: " << sum;
//     cout << "\nСереднє: " << (double)sum / 10 << endl;

//     // 2
//     cout << "\nЗавдання 2\n";
//     int arr2[100];
//     fillArray(arr2, 100, -100, 100);
//     int userNum;
//     cout << "Введіть число: ";
//     cin >> userNum;
//     int count = 0;
//     for (int i = 0; i < 100; i++) {
//         if (arr2[i] == userNum) count++;
//     }
//     cout << "Число " << userNum << " зустрічається " << count << " разів\n";

//     //  3
//     cout << "\nЗавдання 3\n";
//     int arr3[20];
//     fillArray(arr3, 20, -50, 50);
//     int minVal = arr3[0], maxVal = arr3[0], minIndex = 0, maxIndex = 0;
//     for (int i = 0; i < 20; i++) {
//         cout << arr3[i] << " ";
//         if (arr3[i] < minVal) {
//             minVal = arr3[i];
//             minIndex = i;
//         }
//         if (arr3[i] > maxVal) {
//             maxVal = arr3[i];
//             maxIndex = i;
//         }
//     }
//     cout << "\nМінімум: " << minVal << ", індекс: " << minIndex;
//     cout << "\nМаксимум: " << maxVal << ", індекс: " << maxIndex << endl;

//     //  4
//     cout << "\nЗавдання 4\n";
//     int arr4[200];
//     fillArray(arr4, 200, 0, 200);
//     int oneDigit = 0, twoDigit = 0, threeDigit = 0;
//     for (int i = 0; i < 200; i++) {
//         if (arr4[i] >= 0 && arr4[i] <= 9) oneDigit++;
//         else if (arr4[i] >= 10 && arr4[i] <= 99) twoDigit++;
//         else threeDigit++;
//     }
//     cout << "Однорозрядні: " << (double)oneDigit / 2 << "%\n";
//     cout << "Двозначні: " << (double)twoDigit / 2 << "%\n";
//     cout << "Тризначні: " << (double)threeDigit / 2 << "%\n";

//     // 5
//     cout << "\nЗавдання 5\n";
//     int M = 10, N = 10;
//     int arr5a[10], arr5b[10];
//     fillArray(arr5a, M, 1, 20);
//     fillArray(arr5b, N, 1, 20);
//     set<int> common;
//     for (int i = 0; i < M; i++) {
//         for (int j = 0; j < N; j++) {
//             if (arr5a[i] == arr5b[j]) common.insert(arr5a[i]);
//         }
//     }
//     cout << "Перший масив: ";
//     for (int i = 0; i < M; i++) cout << arr5a[i] << " ";
//     cout << "\nДругий масив: ";
//     for (int i = 0; i < N; i++) cout << arr5b[i] << " ";
//     cout << "\nСпільні елементи: ";
//     for (int x : common) cout << x << " ";
//     cout << endl;

//     // 6
//     cout << "\nЗавдання 6\n";
//     set<int> lottery;
//     while (lottery.size() < 5) {
//         lottery.insert(1 + rand() % 42);
//     }
//     int user[5];
//     cout << "Введіть 5 чисел (1-42): ";
//     for (int i = 0; i < 5; i++) cin >> user[i];
//     int matches = 0;
//     for (int i = 0; i < 5; i++) {
//         if (lottery.count(user[i])) matches++;
//     }
//     int prize = 0;
//     if (matches == 3) prize = 100;
//     else if (matches == 4) prize = 500;
//     else if (matches == 5) prize = 2500;
//     cout << "Збігів: " << matches << ", Приз: " << prize << " кредитів\n";

//     return 0;
// }
