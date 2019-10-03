// 78_subsets.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

void next(vector<int>& nums, vector<vector<int>>& res, vector<int>& v, int start)
{
	res.push_back(v);
	for (int i=start;i<nums.size();i++)
	{
		v.push_back(nums[i]);
		next(nums, res, v, i + 1);
		v.pop_back();
	}
}

vector<vector<int>> subsets(vector<int>& nums) {
	vector<vector<int>> res;
	vector<int> v;
	next(nums, res, v, 0);
	return res;
}

int main()
{
	vector<int> nums = { 1};
	vector<vector<int>> res = subsets(nums);
	for each (auto var in res)
	{
		cout << "[";
		for each (auto item in var)
		{
			cout << item << " ";
		}
		cout << "]\r\n";
	}
    return 0;
}

