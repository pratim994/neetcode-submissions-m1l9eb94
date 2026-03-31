#include <cstring>

class Solution {
public:

typedef string si;

    string encode(vector<string>& strs) {

        si encodedString;

        for(const si& c :  strs){

            int n = size(c);

            encodedString.append(reinterpret_cast<const char *>(&n) , sizeof(int));

            encodedString.append(c);


        }

        return encodedString;
       
    }

    vector<string> decode(string s) {

      vector<si> decode;

      int currpos = 0, tlen = size(s);

      while(currpos < tlen){

        int strlen = 0;

        memcpy(&strlen , s.data() + currpos, sizeof(int) );

        currpos += sizeof(int);

        decode.push_back(s.substr(currpos, strlen));

        currpos += strlen;
      }

      
    return decode;
    }
};
