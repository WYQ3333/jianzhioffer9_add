#include<iostream>
using namespace std;
#include<vector>


//����һ����������������һ������S���������в�����������ʹ�����ǵĺ�������S��
//����ж�����ֵĺ͵���S������������ĳ˻���С��

class Solution1 {
public:
	vector<int> FindNumbersWithSum(vector<int> array, int sum) {
		vector<int> result;
		int i = 0;
		int j = 0;
		for (i = 1; i < array.size(); ++i){
			for (j = 0; j < i; ++j){
				if (sum == (array[i] + array[j])){
					result.push_back(array[j]);
					result.push_back(array[i]);
					return result;
				}
			}
		}
	}
};

int main(){
	vector<int> array = { 1, 2, 3, 4, 5, 6, 7 };
	vector<int> arraynum = {0,0};
	int sum = 7;
	Solution1 s1;
	arraynum = s1.FindNumbersWithSum(array, sum);
	int i = 0;
	for (i = 0; i < arraynum.size(); ++i){
		cout << arraynum[i]<<" ";
	}
	cout << endl;
	system("pause");
	return 0;
}