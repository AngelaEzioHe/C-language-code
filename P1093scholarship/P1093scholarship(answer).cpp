#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<queue>
using namespace std;
struct student{
	int num,yw,sx,yy,ans;
}stu[301];
bool cmp(student a,student b){
	if(a.ans!=b.ans){
		return a.ans > b.ans;
	}else{
		if(a.yw != b.yw) return a.yw > b.yw;
		else return a.num < b.num;
	}
}
int n;
void print(){
	for(int i=1;i<=n;i++){
		cout<<stu[i].num<<" "<<stu[i].ans<<endl;
		if(i==5) break;
	}
}
int main(){
	cin>>n;
	for(int i = 1; i <=n; i++){
		cin>>stu[i].yw>>stu[i].sx>>stu[i].yy;
		stu[i].num = i; stu[i].ans = stu[i].yw+stu[i].sx+stu[i].yy;
	}
	sort(stu+1,stu+n+1,cmp);
	print();
	return 0;
}