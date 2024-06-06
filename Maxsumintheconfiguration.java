import java.util.Scanner;

class Maxsum_Among_All_Rotations_Array {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for (int i = 0; i < n; i++)
                arr[i] = sc.nextInt();

            System.out.println(new Solution().max_sum(arr, n));

            t--;
        }
    }
}

class Solution {
    long max_sum(int a[], int n) {
        long sum = 0;
        long currSum = 0;

        // Calculate sum of array elements and current sum
        for (int i = 0; i < n; ++i) {
            sum += a[i];
            currSum += (long) i * a[i];
        }

        long maxi = currSum;

        // Calculate maximum sum by rotating the array
        for (int i = 1; i < n; ++i) {
            currSum = currSum + sum - (long) n * a[n - i];
            maxi = Math.max(maxi, currSum);
        }

        return maxi;
    }
}
