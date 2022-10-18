class Solution {
    public int romanToInt(String s) {
        
        int sum = 0,y=0,i=0;         
        while(i<s.length())
        {
            int y1 = num(s.charAt(i));
            if(i<s.length()-1){
            int y2  = num(s.charAt(i+1));
            if(y1 < y2)
            {
        
                y1 = y2-y1;
                i+=2;
            }
            else
                i++;  
            }
            else
                i++;
           
            sum += y1;
        
        }
        return sum;
    }
    
    static int num(char ch)
    {
        int y =0;
        switch(ch)
            {
                    case 'I' : y = 1;
                           break;
                    case 'V' : y = 5;
                              break;
                    case 'X' : y = 10;
                               break;
                    case 'L' : y = 50;
                               break;
                    case 'C' : y = 100;
                               break;
                    case 'D' : y = 500;
                               break;
                    case 'M' : y = 1000;
                               break;
            }
        return y;
    }    
}
