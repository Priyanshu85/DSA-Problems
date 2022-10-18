class Solution {
    public List<String> letterCombinations(String digits) {    
        if(digits.isEmpty()){
             return Collections.emptyList();
         }
        return perm("",digits);
        }
    
      static List<String> perm(String p ,String up)
      {
          if(up.isEmpty())
          {
              ArrayList<String> list = new ArrayList<>();
              list.add(p);
              return list;
          }
          ArrayList<String> ans= new ArrayList<>();
          int digit = up.charAt(0) - '0';
          int start = 0;
          int end = 0;
        switch (digit){
            case 1 : start = 0;
            end = 0;
            break;
            case 2 : start = 0;
            end = 2;
            break;
            case 3 : start = 3;
            end = 5;
            break;
            case 4 : start = 6;
            end = 8;
            break;
            case 5 : start = 9;
            end = 11;
            break;
            case 6 : start = 12;
            end = 14;
            break;
            case 7: start = 15;
            end = 18;
            break;
            case 8: start = 19;
            end = 21;
            break;
            case 9: start = 22;
            end = 25;
            break;
        }
          
          for(int i = start;i<=end;i++)
          {
              char ch = (char)('a'+ i);
              ans.addAll(perm(p+ch,up.substring(1)));
                            
          }
          return ans;
      }
    
}




