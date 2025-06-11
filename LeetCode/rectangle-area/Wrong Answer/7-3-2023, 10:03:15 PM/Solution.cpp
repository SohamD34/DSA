// https://leetcode.com/problems/rectangle-area

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        
        int left_rect_left_x = min(ax1,ax2);
        int left_rect_right_x = max(ax1,ax2);

        int right_rect_left_x = min(bx1,bx2);
        int right_rect_right_x = max(bx1,bx2);

        int left_rect_up_y = max(ay1,ay2);
        int left_rect_down_y = min(ay1,ay2);

        int right_rect_up_y = max(by1,by2);
        int right_rect_down_y = min(by1,by2);

        if(left_rect_right_x <= right_rect_left_x){
            return 0;
        }
        if(left_rect_down_y >= right_rect_up_y){
            return 0;
        }
        return 0;
    }
};