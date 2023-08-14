class Solution{
    public:
        int gcd(int num1, int num2){
            if (num1 == 0)
                    return num2;
                else if (num2 == 0)
                    return num1;

                else if (num1 == num2)
                    return num1;
            
                else if (num1 > num2)
                    return gcd(num1 - num2, num2);
                else
                    return gcd(num1, num2 - num1);
        }

        int findValidSplit(vector <int> & nums){
            if(nums.size() == 0 || nums.size()== 1){
                return 0;
            }

            int split = 0;
            

            for(int i = 0; i< split+1; i++){
                int val = nums[i];
                
                for(int j = split+ 1; j< nums.size(); j++){
                    
                    int gcdVal = gcd(nums[i], nums[j]);
                    
                    if( gcdVal!= 1 && j > split){
                        split = j;
                        
                        if(split == nums.size() -1){
                            return -1;
                        }
                    }
                }
            }

            return split;


        }

        
}
