/* Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
The elements in the sorted array might be repeated. 
You need to print the first and last occurrence of the target and print the index of first and last occurrence.
 Print -1, -1 if the target is not present.


Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

Follow-up(optional): Can you do it in O(log n) Time Complexity?
*/

#include <stdio.h>

int main() {
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);
    clrscr();
    int nums[n];
    printf("Enter the elements of the sorted array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
}
    clrscr();
    int target;
    int count=0;
    printf("Enter your Target: ");
    scanf("%d",target);
    for(int i=0;i<n;i++){
        if
    }
    for(int i= 0; i<n; i++){
        if(nums[i]==nums[i+1]){
            count++;
        }
        if(count>1){
            printf("%d, ",i);
            printf("%d", count+i);
            return 0;
        }
    }

}