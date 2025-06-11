// https://leetcode.com/problems/find-median-from-data-stream

class MedianFinder {
public:
    MedianFinder() {
    }
    vector<int> array;
    int length = 0;
    
    void addNum(int num) {
        array.push_back(num);
        sort(array.begin(), array.end());
        length++;
    }
    
    double findMedian() {
        
        if(length%2 == 0){
            return float(array[length/2 -1] + array[length/2])/2;
        }
        else{
            return array[length/2];
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */