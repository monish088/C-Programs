
// function calling in C++
#include <iostream>     // compiler directive
using namespace std;    // this statement allows all elements in the std namespace to be
                        // accessed in an unqualified manner (witout std:: prefix)
int main() {
    int num1, num2, total;
    void my_welcome();
    int my_input();
    int my_addition(int, int);
    void my_display(int, int, int);
    void my_goodbye();

    my_welcome();
    num1 = my_input();
    num2 = my_input();
    total = my_addition(num1, num2);
    my_display(num1, num2, total);
    my_goodbye();
}

void my_welcome() {
    cout << "Welcome to the World of Programming...\n";
}

int my_input() {
    int data;
    cout << "Please enter the a number: ";
    cin >> data;
    return data;
}

int my_addition(int n1, int n2) {
    int tot;
    cout << "Performing the addtion operation...\n";
    tot = n1 + n2;
    return tot;
}
void my_display(int nn1, int nn2, int tott) {
    cout << "So the " << nn1 << " + " << nn2 << " = " << tott << "\n";
}

void my_goodbye() {
    cout << "End of the program...";
}

