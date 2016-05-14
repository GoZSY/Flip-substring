/**********************************************************
循环查找第一个匹配到串1的串2的开始及以后的字符是否相等
************************************************************/
class ReverseEqual {
public:
    bool checkReverseEqual(string s1, string s2)
    {
        int length1 = s1.size();
        int length2 = s2.size();
        if(length1 != length2)
            return false;
         
        for(int i = 0; i <length1 ;++i)
        {
            if(s1[0] == s2[i])
            {
                int post1 = 0;
                int count = 0;
                int post2 = i;
                while(post1 < length1 && s1[post1] == s2[post2++])
                {
                    count++;
                    post1++;
                    if(post2 == length1)
                        post2 = 0;
                }
                if(count == length1)
                    return true;
            }
        }
        return false;
        // write code here
    }
};
