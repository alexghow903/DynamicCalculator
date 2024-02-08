#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <ctype.h>

using namespace std;

long double add(string input, int index)
{
    // need to move to long double.
    char parenb = 0;
    char parend = 0;
    int j = index;
    while(true){
        j--;
        if(!isdigit(input[j])){
            if(j < 0){
                j = 0;
            }
            parenb = j;
            break;
        }
    }
    j = index;
    while(true){
        j++;
        if(!isdigit(input[j])){
            if(input.size() < j){
                j = input.size();
            }
            parend = j;
            break;
        }
    }
    string str1 = input.substr(parenb, (index-parenb));
    string str2 = input.substr((index+1), (parend-index+1));
    float num1 = std::stof(str1);
    float num2 = std::stof(str2);
    long double ans = num1 + num2;
    return ans;
}

long double sub(string input, int index)
{
    // need to move to long double.
    char parenb = 0;
    char parend = 0;
    int j = index;
    while(true){
        j--;
        if(!isdigit(input[j])){
            if(j < 0){
                j = 0;
            }
            parenb = j;
            break;
        }
    }
    j = index;
    while(true){
        j++;
        if(!isdigit(input[j])){
            if(input.size() < j){
                j = input.size();
            }
            parend = j;
            break;
        }
    }
    string str1 = input.substr(parenb, (index-parenb));
    string str2 = input.substr((index+1), (parend-index+1));
    float num1 = std::stof(str1);
    float num2 = std::stof(str2);
    long double ans = num1 - num2;
    return ans;
}

long double mult(string input, int index)
{
    // need to move to long double.
    char parenb = 0;
    char parend = 0;
    int j = index;
    while(true){
        j--;
        if(!isdigit(input[j])){
            if(j < 0){
                j = 0;
            }
            parenb = j;
            break;
        }
    }
    j = index;
    while(true){
        j++;
        if(!isdigit(input[j])){
            if(input.size() < j){
                j = input.size();
            }
            parend = j;
            break;
        }
    }
    string str1 = input.substr(parenb, (index-parenb));
    string str2 = input.substr((index+1), (parend-index+1));
    float num1 = std::stof(str1);
    float num2 = std::stof(str2);
    long double ans = num1 * num2;
    return ans;
}

long double div(string input, int index)
{
    // need to move to long double.
    char parenb = 0;
    char parend = 0;
    int j = index;
    while(true){
        j--;
        if(!isdigit(input[j])){
            if(j < 0){
                j = 0;
            }
            parenb = j;
            break;
        }
    }
    j = index;
    while(true){
        j++;
        if(!isdigit(input[j])){
            if(input.size() < j){
                j = input.size();
            }
            parend = j;
            break;
        }
    }
    string str1 = input.substr(parenb, (index-parenb));
    string str2 = input.substr((index+1), (parend-index+1));
    float num1 = std::stof(str1);
    float num2 = std::stof(str2);
    long double ans = num1 / num2;
    return ans;
}

long double exp(string input, int index)
{
    // need to move to long double.
    char parenb = 0;
    char parend = 0;
    int j = index;
    while(true){
        j--;
        if(!isdigit(input[j])){
            if(j < 0){
                j = 0;
            }
            parenb = j;
            break;
        }
    }
    j = index;
    while(true){
        j++;
        if(!isdigit(input[j])){
            if(input.size() < j){
                j = input.size();
            }
            parend = j;
            break;
        }
    }
    string str1 = input.substr(parenb, (index-parenb));
    string str2 = input.substr((index+1), (parend-index+1));
    float num1 = std::stof(str1);
    float num2 = std::stof(str2);
    //cout << num1 << num2 << endl;
    long double ans = pow(num1, num2);
    return ans;
}

string simplify(string input)
{
    // I want to delve into a part of the equation and simplify it down a level.


}
int main()
{
    string input;
    cout << "Welcome to the calculator!" << endl;
    int index;
    int index2;
    vector< string > problem;

    while(true){
        input = "";
        index = 0;
        cout << "Just paste any number or sign, no spaces: ";
        getline(cin, input);
        // cout << input << endl;

        for (char i : input) {
            // cout << i << endl;
            switch(i) {
            case '(':
                // scan for end of parenthesis send to simplify function, paste back into input and loop again.
                //parenb = index;

                //problem.push_back(input.substr(parenb, (parend-parenb+1)));
                //parenb = 0;
                //parend = 0;
            case '^':
                {
                    // scan before and after for full number and send substring to mult. Loop again.
                    long double ans = exp(input, index);
                    cout << ans << endl;
                    //break;
                }
            case '*':
                {
                    // scan before and after for full number and send substring to mult. Loop again.
                    long double ans = mult(input, index);
                    cout << ans << endl;
                    //break;
                }

            case '/':
                {
                    // scan before and after for full number and send substring to mult. Loop again.
                    long double ans = div(input, index);
                    cout << ans << endl;
                    //break;
                }
            case '+':
                {
                    // scan before and after for full number and send substring to mult. Loop again.
                    long double ans = add(input, index);
                    cout << ans << endl;
                    //break;
                }
            case '-':
                {
                    // scan before and after for full number and send substring to mult. Loop again.
                    long double ans = sub(input, index);
                    cout << ans << endl;
                    //break;
                }
            }
            index++;
        }
        for (string j : problem) {
            cout << j << endl;
        }
    }

    return 0;
}
