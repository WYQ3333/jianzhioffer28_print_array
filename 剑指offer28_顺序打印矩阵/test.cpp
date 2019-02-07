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
		int i = 0;
		int j = 0;
		while (count < (col2*row2)){
			for (i = col1; i < col2; ++i){
				cout << matrix[i][j] << " ";
			}
			row1++;
			i = col2 - 1;
			for (j = row1; j < row2; ++j){
				cout << matrix[i][j] << " ";
			}
			col2--;
			j = row2 - 1;
			for (i; i>col1; --i){
				cout << matrix[i][j] << " ";
			}
			row2--;
			for (j; j > row1; --j){
				cout << matrix[i][j] << " ";
			}
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