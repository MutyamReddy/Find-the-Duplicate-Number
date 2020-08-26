class Solution {
public:
    int findDuplicate(vector<int>& a){
        if(a.empty()){
            return 0;
        }
        int slow=a[0];
        int fast=a[0];
        do{
            slow=a[slow];
            fast=a[a[fast]];
        }while(slow!=fast);
        fast=a[0];
        while(fast!=slow){
            slow=a[slow];
            fast=a[fast];
        }
        return fast;
    }
};
