#include<iostream>

#include<vector>

using namespace std;

class Solution {
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
		while (count < temp){
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
			for (i; i>= col1; --i){
				cout << matrix[j][i] << " ";
				count++;
			}
			i = col1 + 1;
			row2--;
			for (j; j >= row1; --j){
				cout << matrix[j][i] << " ";
				count++;
			}
			j = row1 + 1;
			col1++;
		}
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