#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        long upper= nums.size()-1;
        long lower = 0;
        long i=(lower+upper)/2;
        
        while (nums[i]!=target && lower <=upper ){
            if (nums[i]< target){
                upper=i-1;
            }
            else{
                lower=i+1;
            }
            i=(lower+upper)/2;
        }
        return i;
    
    }

int main(){
    
    vector<int> a;
    a.push_back(1);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);

    searchInsert(a,5);

    return 0;
}