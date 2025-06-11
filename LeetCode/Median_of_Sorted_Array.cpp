#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int ptr1 = 0;
        int ptr2 = 0;
        int n1 = nums1.size(); 
        int n2 = nums2.size();

        // vector<int> combined;
	int number1, number2;
        int index = 0;
        int expected_index = (n1+n2)/2+1;

        while(index!=expected_index){

            if(nums1[ptr1] < nums2[ptr2]){
                // combined.push_back(nums1[ptr1]);
		number2 = number1;
		number1 = nums1[ptr1];
                ptr1++;
            }
            else{
                // combined.push_back(nums2[ptr2]);
		number1 = number2;
		number2 = nums2[ptr2];
                ptr2++;
            }
            index++;
        }
	// int a = expected_index-1;
	if((n1+n2)%2==0){
		return (number1 + number2)/2.0;
	}
	return number2;
}

int main(){

	// FIND COMBINED MEDIAN OF TWO SORTED ARRAYS

	vector<int> arr1 = {1,3};
	vector<int> arr2 = {2};

	// vector<int> arr1 = {1,3};
	// vector<int> arr2 = {2};

	cout << findMedianSortedArrays(arr1, arr2) << endl;

	return 0;
}