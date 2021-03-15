class Solution {
public:
    bool check(char a)
    {
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int size=0;
        int i=0;
        int j=0;
        int c_size=0;
        while(j<s.size())
        {
            if((j-i+1)<k)
            {
                if(check(s[j]))
                {
                    c_size++;
                }
                j++;
                continue;
            }
            else if((j-i+1)==k)
            {
                if(check(s[j]))
                {
                    c_size++;
                    // j++;
                }
                j++;
                size=max(size,c_size);
                if(check(s[i]))
                {
                    c_size--;
                }
                i++;
                    
            }
        }
        return size;
        
    }
};
