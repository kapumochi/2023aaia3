//week13-3.cpp
//https://adventofcode.com/2024/day/1
//input放在右下stdin

int main() {
    int a, b; //伸縮自如的2個陣列
    vector<int> A, B; //兩個數
    while(cin >> a >> b){ //input
        A.push_back(a); //放到陣列
        B.push_back(b);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int ans = 0;
    for(int i=0; i<A.size(); i++){
        cout << A[i] << " ";
        ans += abs(A[i]-B[i]);
    }
    cout << "答案是" << ans;
}
