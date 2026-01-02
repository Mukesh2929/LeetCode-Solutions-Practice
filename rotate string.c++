class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.size()!=goal.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if (s==goal){
                return true;
            }
            char first = s[0];
            s.erase(s.begin());
            s.push_back(first);
        }
        return false;
    }
};