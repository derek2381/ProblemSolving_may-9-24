// problem link
// https://leetcode.com/problems/maximize-happiness-of-selected-children/description/?envType=daily-question&envId=2024-05-09

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long int sum = 0;
        sort(happiness.begin(), happiness.end(), greater<int>());
        int i;
        for(i = 0;i < k;i++){
            if(happiness[i] - i > 0){
                sum += happiness[i] - i;
            }
        }

        // for(i = k;i < happiness.size();i++){
        //     if(happiness[i] - k > 0){
        //         sum += happiness[i] - k;
        //     }
        // }


        return sum;
    }
};
