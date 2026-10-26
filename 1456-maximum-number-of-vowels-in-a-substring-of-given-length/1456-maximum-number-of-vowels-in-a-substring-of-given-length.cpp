class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int start = 0;
        int end = 0;
        int count = 0;
        int maxi = 0;

        while (end < n) {
            if (s[end] == 'a' || s[end] == 'e' ||
                s[end] == 'i' || s[end] == 'o' ||
                s[end] == 'u') {
                count++;
            }

            if (end - start + 1 == k) {
                maxi = max(maxi, count);

                if (s[start] == 'a' || s[start] == 'e' ||
                    s[start] == 'i' || s[start] == 'o' ||
                    s[start] == 'u') {
                    count--;
                }

                start++;
            }

            end++;
        }

        return maxi;
    }
};