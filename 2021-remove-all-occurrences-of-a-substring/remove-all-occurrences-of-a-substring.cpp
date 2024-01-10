class Solution {
public:
    string removeOccurrences(string s, string part) {
        int m=part.size();
        int idx;
        while(1){
            idx=s.find(part);
            if(idx==-1){
                break;
            }
            s.erase(idx,m);

        } 
    return s;
    }
};