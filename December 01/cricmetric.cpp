#include<iostream>
using namespace std;
int main() {
	int n = 0, sum = 0, batsmenNo = 0, highestScore = 0;
	cout<<"Enter total no. of batsmen : "<<endl;
	cin>>n;
	int *runs = new int[n]();
	cout<<"Enter runs of all batsmen sequentially: "<<endl;
	for(int i = 0; i<n; i++) {
		cin>>runs[i];
		sum += runs[i];
		if(runs[i] > highestScore) {
			highestScore = runs[i];
			batsmenNo = i;
		}
	}
	cout<<"Total runs scored by the team: "<<sum<<endl;
	cout<<"Highest run was scored by "<<batsmenNo<<": "<<highestScore<<endl;
	return 0;
}
