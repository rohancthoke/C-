#include <queue>
#include <vector>

class Solution {
public:
    int lastStoneWeight(std::vector<int>& stones) {
    
        std::priority_queue<int> maxHeap(stones.begin(), stones.end());

        while (maxHeap.size() > 1) {
            int y = maxHeap.top();  
            maxHeap.pop();
            int x = maxHeap.top();  
            maxHeap.pop();

            
            int diff = y - x;

            if (diff != 0) {
                maxHeap.push(diff);
            }
        }

        
        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};
