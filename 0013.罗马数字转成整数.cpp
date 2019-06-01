class Solution {
public:
    int romanToInt(string s) {
        int size = s.size();
        int ans = 0;
        for(int i = 0; i < size; i++){
            //1,4,9
            if(s[i] == 'I'){
                if(s[i+1] == 'V' || s[i+1] == 'X') ans -= 1;
                else ans += 1;
            }
            //5
            if(s[i] == 'V') ans += 5;
            //10,40,90
            if(s[i] == 'X'){
                if(s[i+1] == 'L' || s[i+1] == 'C') ans -= 10;
                else ans += 10;
            }
            //50
            if(s[i] == 'L') ans += 50;
            
            if(s[i] == 'C'){
                if(s[i+1] == 'D' || s[i+1] == 'M') ans -= 100;
                else ans += 100;
            }
            
            if(s[i] == 'D') ans += 500;
            if(s[i] == 'M') ans += 1000;
        }
        return ans;
    }
        /*
        //巨慢
        int result = 0;
        map<char, int> roman_num_map;
        roman_num_map['I'] = 1;
        roman_num_map['V'] = 5;
        roman_num_map['X'] = 10;
        roman_num_map['L'] = 50;
        roman_num_map['C'] = 100;
        roman_num_map['D'] = 500;
        roman_num_map['M'] = 1000;
        
        int size = s.size();
        for(int i = 0; i < size; ++i)
        {
            //小的数字位于大的数字左边
            if(roman_num_map[s[i]] < roman_num_map[s[i + 1]])
            {
                result -= roman_num_map[s[i]];
            }
            else
            {
                 result += roman_num_map[s[i]];
            }
            
        }
        
        return result;
    }*/
    
};
