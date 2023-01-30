/*Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]
*/
package sesson1;

import java.util.ArrayList;
import java.util.List;



//submit
public class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> ans = new ArrayList<List<Integer>>(numRows);
        for (int i = 0; i < numRows; i++) {
            List<Integer> row = new ArrayList<>(i+1);
            while (row.size() <= i) row.add(1);
            int mid = i >> 1;
            for (int j = 1; j <= mid; j++) {
                int val = ans.get(i-1).get(j-1) + ans.get(i-1).get(j);
                row.set(j, val);
                row.set(row.size()-j-1, val);
            }
            ans.add(row);
        }
        return ans;
    }
}

