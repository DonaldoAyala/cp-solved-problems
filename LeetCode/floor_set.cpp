#include <bits/stdc++.h>
using namespace std;

int floor ( const set<int> &numbers , int target) {
    auto it = numbers.lower_bound(target);
    if ( *it == target ) {
        return *it;
    } else if ( it == numbers.begin() ){
        return *it;
    } else {
        it--;
        return *it;
    }
}

int main () {
    set<int> nums;
    for ( int i = 0 ; i < 10 ; i++ ) {
        nums.insert(i*3);
    }
    cout << floor (nums, -1) << endl;
    cout << floor (nums, 27) << endl;
    cout << floor (nums, 10) << endl;
    return 0;
}
