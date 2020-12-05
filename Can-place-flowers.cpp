class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        if(flowerbed.size() == 0 && n != 0)
            return false;
        
        if(n == 0)return true;
        
        if(flowerbed.size() == 1)
        {
            if(flowerbed[0] == 0 && n == 1)
                return true;
            return false;
        }
        
        if(n > (flowerbed.size()/2 + 1))
            return false;
        
        for(int i = 0; i < flowerbed.size(); ++i)
        {
            if(i == 0)
            {
                if(flowerbed[i] == 0 && flowerbed[i+1] == 0)
                {
                    flowerbed[i] = 1;
                    n--;
                }
            }
            else if(i == flowerbed.size()-1)
            {
                if(flowerbed[i] == 0 && flowerbed[i-1] == 0)
                {
                    flowerbed[i] = 1;
                    n--;
                }
            }else
            {
                if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && flowerbed[i] == 0)
                {
                    n--;
                    flowerbed[i] = 1;
                }
            }
            if(n <= 0)return true;
        }
        
        if(n <= 0)return true;
        return false;
    }
};
