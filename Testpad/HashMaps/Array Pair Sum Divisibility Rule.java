class Result {
    static int isArrayDivisibleInPairs(int a[], int n, int k) {
        int[] freq = new int[k];

        for (int num : a) {
            freq[num % k]++;
        }

        // Numbers with remainder 0 must have an even count
        if (freq[0] % 2 != 0) return 0;

        // Numbers with remainder r must match numbers with remainder k - r
        for (int r = 1; r <= k / 2; r++) {
            if (r == k - r) { 
                if (freq[r] % 2 != 0) return 0;
            } else {
                if (freq[r] != freq[k - r]) return 0;
            }
        }

        // If all conditions are satisfied, return 1
        return 1;
    }
}
