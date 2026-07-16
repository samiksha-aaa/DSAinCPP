#include<iostream>
#include<stack>
#include<string>
bool validparentheses(std::string s) {
    std::stack<char> stack;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            stack.push(c);
        } else {
            if (stack.empty()) return false;
            char top = stack.top();
            stack.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return stack.empty();
}
int main() {
    std::string s;
    std::cout << "Enter a string of parentheses: ";
    std::getline(std::cin, s);
    if (validparentheses(s)) {
        std::cout << "The parentheses are valid." << std::endl;
    } else {
        std::cout << "The parentheses are not valid." << std::endl;
    }
    return 0;
}
