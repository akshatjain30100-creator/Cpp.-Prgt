#include <stdio.h>

/* Function Declarations */
void table(int n);
long factorial(int n);
long power(int base, int exp);
int Prime(int n);
int Perfect(int n);
int sumOfDigits(int n);
int reverseNumber(int n);
int Armstrong(int n);
int lcm(int a, int b);
int hcf(int a, int b);
void fibbonacci(int n);

int main() {
    int choice, num, num2, ans, flag, a, b, n;

    do {
        printf("\n=== MENU DRIVEN PROGRAM ===\n");
        printf("1. Table\n");
        printf("2. Factorial\n");
        printf("3. Power\n");
        printf("4. Prime Check\n");
        printf("5. Perfect Number Check\n");
        printf("6. Sum of Digits\n");
        printf("7. Reverse of Number\n");
        printf("8. Armstrong Check\n");
        printf("9. LCM\n");
        printf("10. HCF\n");
        printf("11. Fibonacci\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                table(num);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                ans = factorial(num);
                printf("Factorial = %ld\n", ans);
                break;

            case 3:
                printf("Enter base and exponent: ");
                scanf("%d %d", &num, &num2);
                ans = power(num, num2);
                printf("Power = %ld\n", ans);
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);
                flag = Prime(num);
                if(flag == 1)
                    printf("%d is Prime\n", num);
                else
                    printf("%d is Not Prime\n", num);
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%d", &num);
                if(Perfect(num))
                    printf("%d is Perfect\n", num);
                else
                    printf("%d is Not Perfect\n", num);
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%d", &num);
                ans = sumOfDigits(num);
                printf("Sum of digits = %d\n", ans);
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%d", &num);
                ans = reverseNumber(num);
                printf("Reverse = %d\n", ans);
                break;

            case 8:
                printf("Enter a number: ");
                scanf("%d", &num);
                if(Armstrong(num))
                    printf("%d is Armstrong\n", num);
                else
                    printf("%d is Not Armstrong\n", num);
                break;

            case 9:
                printf("Enter two numbers: ");
                scanf("%d %d", &num, &num2);
                ans = lcm(num, num2);
                printf("LCM = %d\n", ans);
                break;

            case 10:
                printf("Enter two numbers: ");
                scanf("%d %d", &num, &num2);
                ans = hcf(num, num2);
                printf("HCF = %d\n", ans);
                break;

            case 11:
                printf("Enter limit: ");
                scanf("%d", &n);
                printf("Fibonacci series:\n");
                fibbonacci(n);
                break;

            case 12:
                printf("Exiting program... Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 12);

    return 0;
}

/* Function Definitions */

void table(int n) {
    for(int i=1; i<=10; i++)
        printf("%d * %d = %d\n", n, i, n*i);
}

long factorial(int n) {
    long fact = 1;
    for(int i=1; i<=n; i++)
        fact *= i;
    return fact;
}

long power(int base, int exp) {
    long result = 1;
    for(int i=1; i<=exp; i++)
        result *= base;
    return result;
}

int Prime(int n) {
    if(n <= 1) return 0;
    int flag = 1;
    for(int i=2; i<=n/2; i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int Perfect(int n) {
    int sum = 0;
    for(int i=1; i<=n/2; i++) {
        if(n % i == 0)
            sum += i;
    }
    return (sum == n);
}

int sumOfDigits(int n) {
    int sum = 0, digit;
    while(n != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int reverseNumber(int n) {
    int rev = 0, digit;
    while(n != 0) {
        digit = n % 10;
        rev = rev*10 + digit;
        n /= 10;
    }
    return rev;
}

int Armstrong(int n) {
    int sum = 0, rom = n, digit;
    while(n != 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    return (sum == rom);
}

int lcm(int a, int b) {
    int start = (a > b) ? a : b;
    for(int i = start; i <= a*b; i++) {
        if(i % a == 0 && i % b == 0)
            return i;
    }
    return a*b;
}

int hcf(int a, int b) {
    int start = (a < b) ? a : b;
    for(int i = start; i >= 1; i--) {
        if(a % i == 0 && b % i == 0)
            return i;
    }
    return 1;
}

void fibbonacci(int n) {
    int a = 0, b = 1, c;
    if(n >= 1) printf("%d\t", a);
    if(n >= 2) printf("%d\t", b);
    for(int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
    }
    printf("\n");
}
