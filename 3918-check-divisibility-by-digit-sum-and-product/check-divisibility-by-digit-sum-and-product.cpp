class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int original=n;
while (n > 0) {
    sum += n % 10;
    n /= 10;
}
n=original;
int product = 1;
while (n > 0) {
    product *= n % 10;
    n /= 10;
}
int div=sum+product;
return original % div == 0;
    }
};