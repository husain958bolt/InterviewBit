public class Solution {
    public int coverPoints(ArrayList<Integer> A, ArrayList<Integer> B) {
        
        int m = A.size();
        int n = B.size();
        int x1, x2, y1, y2, dx, dy, dist=0, min, sum = 0;
        
        for (int i =1; i<m; i++) {
            
            x1 = A.get(i-1);
            y1 = B.get(i-1);
        
            x2 = A.get(i);
            y2 = B.get(i);
            
            dx = (int)Math.abs(x2-x1);
            dy = (int)Math.abs(y2-y1);
            min = (int)Math.min(dx,dy);
            
            if (dx == dy) {
                dist = dx;
            }
            else if (min == dx && (y2-y1)<0) {
                dist = y1-y2;
            }
            else if (min == dx && (y2-y1)>0) {
                dist = y2-y1;
            }
            else if (min == dy && (x2-x1)<0) {
                dist = x1-x2;
            }
            else if (min == dy && (x2-x1)>0)
                dist = x2-x1;
                
            sum += dist;
            
            
        }
        return sum;
    }
}
