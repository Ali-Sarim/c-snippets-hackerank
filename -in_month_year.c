/*  you are tasked with building a small utility program for a calendar management system. The program should determine the number of days in a specific month of a given year. It must also handle invalid inputs gracefully.

Write a program that:

Reads two integers:
year (e.g., 2024)
month (1 for January, 2 for February, ..., 12 for December).
Determines the number of days in the specified month for the given year, considering leap years.
Handles invalid inputs:
If the month is not between 1 and 12, output "Invalid Month"
If the year is less than 1, output "Invalid Year"
Input Format

The first line contains an integer, month, representing the month.
The second line contains an integer, year, representing the year.
Constraints

-10^6 ≤ year ≤ 10^6

-10^6 ≤ month ≤ 10^6

Output Format

If both inputs are valid, output an integer representing the number of days in the specified month.
If the month is invalid, output "Invalid Month".
If the year is invalid, output "Invalid Year".
Sample Input 0

2
2020
Sample Output 0

29
Explanation 0

2020 is a leap year, so February(2) has 29 days.

Sample Input 1

11
2023
Sample Output 1

30
Explanation 1

November(11) has 30 days

Sample Input 2

0
0
Sample Output 2

Invalid Month
Invalid Year  */


#include <stdio.h>
#include <string.h>
int main() {
    int m, y;
    scanf("%d %d", &m, &y);

    if (y > 1 && m <= 12) {
        switch (m) {
            case 1: printf("31"); break;
            case 3: printf("31"); break;
            case 4: printf("30"); break;
            case 5: printf("31"); break;
            case 6: printf("30"); break;
            case 7: printf("31"); break;
            case 8: printf("31"); break;
            case 9: printf("30"); break;
            case 10: printf("31"); break;
            case 11: printf("30"); break;
            case 12: printf("31"); break;
            case 2:
                if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
                    printf("29");
                } else {
                    printf("28");
                }
                break;
        }
    } else {
         if (m > 12 || m < 1) {
            printf("Invalid Month\n");
        }
        if (y < 1) {
            printf("Invalid Year\n");
        }
        
    }

    return 0;
}
