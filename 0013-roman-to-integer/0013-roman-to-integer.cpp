class Solution {
public:
  int val(char c) {
    switch(c) {
      case 'I':
        return 1;
      case 'V':
        return 5;
      case 'X':
        return 10;
      case 'L':
        return 50;
      case 'C':
        return 100;
      case 'D':
        return 500;
      case 'M':
        return 1000;
    }
    return 0;
  }
  int romanToInt(string s) {
    int value = 0, curr;
    for(int i=0; i < s.length() -1; i++) {
      curr = val(s[i]);
      if(curr < val(s[i+1])) value -= curr;
      else value += curr;
    }
    return value + val(s[s.length()-1]);
  }
};