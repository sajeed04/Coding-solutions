// LeetCode 2410: Maximum Matching of Players With Trainers
// Solved on: July 15, 2025

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i = 0, j = 0, count = 0;
        int n = players.size();
        int m = trainers.size();
        while(i < n && j < m) {
            if(players[i] <= trainers[j]) {
                count++;
                i++;
            }
            j++;
        }
        return count;
    }
};
