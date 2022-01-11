class Solution {
public:
    string addBinary(string a, string b) {
    
        int x = a.size()-1, y = b.size()-1,carry=0;
        
        string ans = "";
        
        while(x >= 0 || y >= 0 || carry)
        {
            if(x >= 0 && a[x--]=='1') ++carry;
            if(y >= 0 && b[y--]=='1') ++carry;
            ans.insert(0, carry %2 ==1 ? "1" : "0");
            carry /= 2;
        }
        return ans;
    }
};