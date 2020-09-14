class Solution {
public:
    
    vector<int> tempvec, originalvec;//define 2 vectors, we select elements randomly from tempvec 
    Solution(vector<int>& nums) {
        tempvec = nums; //copy given elements in two defined vectors
        originalvec = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return originalvec;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        
        int n = tempvec.size(); 
        
        if (n == 0)
            return tempvec; 
        
        for (int i = n - 1; i >= 0; i--) // the pointer goes from last elements of tempvec to left until that hits the first element.
        {
            int j = rand()%(i+1); // it shows the random element index
            
            swap(tempvec[i], tempvec[j]);// swap the last element (the one that has pointer ) with tempvec[j].
        }
        
        return tempvec;
    }

   
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
