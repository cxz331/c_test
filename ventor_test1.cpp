
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define forn(i,a,b) for(int i=a; i < b; ++i)
void vector_print(vector<int> &v)
{
	if (v.empty()) {//v.empty():若v为空则表达式为真，否则，表达式为假
		cout << "该向量为空"<<endl;
	}
	else {
		forn(i, 0, v.size())
			cout << v[i] << " ";//v[i]表示向量的第i个元素（从0开始计数）
		cout << endl;
	}	
}
bool comp_b(int & a, int & b) {
	return a>b;             //return a<b;升序排列
}
int main()
{
	ios::sync_with_stdio(false);
	int temp;
	vector<int> v_t;//声明一个<int>类型的向量v_t
	v_t.push_back(10);//在v_t的末尾插入
	vector_print(v_t);
	temp = 7;
	v_t.insert(v_t.begin(), temp);//在v_t的起始位置插入temp的拷贝
	vector_print(v_t);
	temp = 1997;
	v_t.insert(v_t.begin(), 5,temp);//在temp的起始位置插入5个temp
	vector_print(v_t);
	cout <<"v_t的第一个元素:  "<< v_t.front() << endl; 
	cout <<"v_t的最后一个元素:"<< v_t.back() << endl; 
	cout <<"v_t的大小:        " << v_t.size() << endl;
	v_t.insert(v_t.begin()+2, 2018);//在第二个位置（从0开始计数）插入2018
	vector_print(v_t);
	sort(v_t.begin(), v_t.end());//对v_t进行升序排列
	cout << "进行升序排列后"<<endl;
	vector_print(v_t);
	sort(v_t.begin(), v_t.end(),comp_b);//对v_t进行降序排列
	cout << "进行降序排列后" << endl;
	vector_print(v_t);
	cout << "删除尾端的元素" << endl;
	v_t.pop_back();
	vector_print(v_t);
	v_t.clear();//清空v_t
	vector_print(v_t);
	return 0;
}