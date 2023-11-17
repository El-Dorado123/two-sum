#include<iostream>
#include<vector>
vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0,end=numbers.size()-1;
        vector<int>a(2);
       // a[0]=end+1;
       // a//[1]=end+2;
        while(start<end)
        {
            if(numbers[start]+numbers[end]==target)
                {
                    a[0]=start+1;
                    a[1]=end+1;
                    return a; 
                }
            else if(numbers[start]+numbers[end]<target)
                start++;
            else
                end--;
        }
        return a;
    }
int main()
{
  vector<int> number;
  int target = 60;
  number.push_back(10);
  number.push_back(20);
  number.push_back(30);
  number.push_back(40);
  number.push_back(50);
  vector<int> ans = twosum(number,target);
return 0;
}
  
