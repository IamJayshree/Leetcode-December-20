class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if(arr.size() < 3)
            return false;
        bool flag = false;
        
        if(arr[0] > arr[1])
            return false;
        
        for(int i = 1; i < arr.size(); ++i)
        {
            if(arr[i-1] == arr[i])
                return false;
            if(arr[i-1] < arr[i] && flag)
                return false;
            if(arr[i-1] > arr[i])
                flag = true;
        }
        
        return flag;
    }
};
