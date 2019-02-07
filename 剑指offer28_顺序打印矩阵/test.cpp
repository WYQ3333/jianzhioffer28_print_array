#include<iostream>

#include<vector>

using namespace std;

class Solution1 {
public:
	void printMatrix(vector<vector<int> > matrix) {
		int count = 0;
		int row1 = 0;//0行
		int col1 = 0;//0列
		int row2 = matrix.size();//matrix.size()行
		int col2 = matrix[0].size();//matrix[0].size()列
		int i = 0;//代表列
		int j = 0;//代表行
		int temp = (col2*row2);
		while (count != temp){
			for (i = col1; i < col2; ++i){
				cout << matrix[j][i] << " ";
				count++;
			}
			row1++;
			i = col2 - 1;
			for (j = row1; j < row2; ++j){
				cout << matrix[j][i] << " ";
				count++;
			}
			col2--;
			j = row2 - 1;
			for (i=col2-1; i> col1; --i){
				cout << matrix[j][i] << " ";
				count++;
			}
			row2--;
			for (j=row2; j >= row1; --j){
				cout << matrix[j][i] << " ";
				count++;
			}
			col1++;
		}
	}
};

class Solution {
public:
	vector<int> printMatrix(vector<vector<int>> matrix) {
		int row = matrix.size();
		int col = matrix[0].size();
		vector<int> result;
		if (row == 0 || col == 0)
			return result;
		int left = 0, right = col - 1, top = 0, btm = row - 1;
		while (left <= right&&top <= btm)
		{
			for (int i = left; i <= right; i++)
				result.push_back(matrix[top][i]);
			if (top<btm)
			for (int i = top + 1; i <= btm; i++)
				result.push_back(matrix[i][right]);
			if (top<btm&&left<right)
			for (int i = right - 1; i >= left; i--)
				result.push_back(matrix[btm][i]);
			if (top + 1<btm&&left<right)
			for (int i = btm - 1; i >= top + 1; i--)
				result.push_back(matrix[i][left]);
			left++; right--; top++; btm--;
		}
		return result;
	}
};

void TestFunc(){
	vector<vector<int>> array = { {1,2,3,4}
	, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }, { 13, 14, 15, 16 } };
	Solution s;
	s.printMatrix(array);

}

int main(){
	TestFunc();
	system("pause");
	return 0;
}