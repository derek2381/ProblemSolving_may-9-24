// problem link
// https://codeforces.com/problemset/problem/1843/A


import java.util.*;

public class solution{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-- > 0){
            int n = sc.nextInt();
            int[] arr = new int[n];

            for(int i = 0;i < n;i++){
                arr[i] = sc.nextInt();
            }

            Arrays.sort(arr);
            int i = 0, j = n-1;

            int cost = 0;

            while(i < j)
            {
                cost += arr[j] - arr[i];
                j--;
                i++;
            }

            System.out.println(cost);
        }
    }
}
