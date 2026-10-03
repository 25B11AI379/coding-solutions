class Solution {
public:

    bool isPrime(int n) {
        if(n < 2)
            return false;

        if(n % 2 == 0)
            return n == 2;

        for(int i = 3; i * i <= n; i += 2) {
            if(n % i == 0)
                return false;
        }

        return true;
    }

    int makePalindrome(int x) {
        int ans = x;
        x /= 10;

        while(x > 0) {
            ans = ans * 10 + x % 10;
            x /= 10;
        }

        return ans;
    }

    int primePalindrome(int n) {

        if(n <= 2)
            return 2;

        if(n <= 3)
            return 3;

        if(n <= 5)
            return 5;

        if(n <= 7)
            return 7;

        if(n <= 11)
            return 11;

        for(int x = 10; ; x++) {

            int pal = makePalindrome(x);

            if(pal >= n && isPrime(pal))
                return pal;
        }
    }
};