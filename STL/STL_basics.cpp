#include <bits/stdc++.h>
using namespace std;
// =======PAIRS=======
void pairs()
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second;
    cout << endl;
    pair<int, pair<int, int>> p1 = {1, p};
    cout << p1.first << " " << p1.second.first << endl;
    pair<string, int> p2 = {"STL", 1};
    cout << p2.first << " " << p2.second << endl;
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].first;
}
// =======VECTORS=======
void vectorss()
{
    // vector<int> v;
    // v.push_back(2);
    // v.emplace_back(4);
    vector<pair<int, int>> v1;
    v1.push_back({1, 100});
    v1.emplace_back(2, 200);

    //  PRINTING ELEMNTS OF VECTOR
    // cout << v[0] << " " << v1[1].second << endl;
    vector<int> v2(5, 20);
    // cout << v2[3] << endl ;
    vector<int> v3 = {20, 30, 40, 50, 70};
    vector<int>::iterator i = v3.begin(); // points at first element of vector
    // cout << *(i) << endl;
    i++;
    // cout << *(i) << endl;
    vector<int>::iterator j = v3.end(); // points at memory after the last element and access last element we have to -1 from it
    j--;
    // cout << *(j) << endl;
    for (auto k = v3.begin(); k < v3.end(); k++)
    { // auto doesn't require to write datatype it recognizes the data on basis of what is assigned to variable
        cout << *(k) << endl;
    }

    // REMOVING ELEMENTS
    v3.erase(v3.begin() + 1);                 // removes 2nd element
    v3.erase(v3.begin() + 1, v3.begin() + 3); // (first , last ) deletes a range of elements , last element is not included
    for (int i : v3)
    { // like python for i in any list or tuple
        cout << i << endl;
    }

    // INSERT FUNCTION
    vector<int> v(2, 100);                         // {100,100}
    v.insert(v.begin(), 300);                      // {300,100,100}
    v.insert(v.begin() + 1, 2, 10);                //{300 , 10 ,10 ,100 ,100}
    vector<int> copy(2, 50);                       //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}
    cout << v.size() << endl;
    v.pop_back(); // remove last element
    vector<int> v4(5, 30);
    v2.swap(v4); // swaps elements
    v.clear();   // removes all elements
    cout << v.empty();
}

// =======STACK=======
void explainstack()
{
    // LIFO = Last in first out , no indexing
    stack<int> st;
    st.push(1);                //{1}
    st.push(5);                //{5,1}
    st.push(10);               //{10,5,1}
    st.push(15);               //{15,10,5,1}
    st.emplace(20);            // {20,15,10,5,1}
    cout << st.top() << endl;  // print 20
    st.pop();                  // removes first element {15,10,5,1}
    cout << st.top() << endl;  // print 15
    cout << st.size() << endl; // 4
    cout << st.empty() << endl;
    stack<int> st1, st2;
    st1.swap(st2); // swaps elements
}

// =======QUEUE=======
void explainqueue()
{
    // FIFO
    queue<int> q;
    q.push(1);     //{1}
    q.push(2);     //{1,2}
    q.push(3);     // {1,2,3}
    q.push(4);     // { 1,2,3,4}
    q.back() += 5; // increases last element to 9
    cout << q.back() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
}
void priority()
{
    priority_queue<int> pt; // large number gets high priority
    pt.push(10);            //{10}
    pt.push(1);             //{10,1}
    pt.push(100);           //{100,10,1}
    cout << pt.top() << endl;
    // minimum priority
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(4); //{4}
    p.push(5); //{4,5}
    p.push(2); // {2,4,5}
    cout << p.top() << endl;
}
void explainset()
{
    set<int> s;           // only stores unique elements and in ascending order
    s.insert(1);          //{1}
    s.emplace(2);         // {1,2}
    s.insert(2);          // {1,2}
    s.insert(3);          //{1,2,3}
    s.insert(4);          // {1,2,3,4}
    auto it = s.find(3);  // point towards 3
    s.erase(it);          // constant time
    auto it1 = s.find(6); // element is not there it will point on memory next to last element
    s.erase(4);           // takes logarithmic time
    int cnt = s.count(1); // if element is there 1 , if not then 0
}
void mapp()
{
    map<int, int> mp;
    mp[1] = 2;
    mp.emplace(2, 4);
    mp.insert({3, 2});
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << mp[1] << endl;
    cout << mp[5] << endl;
}
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    s if (p1.second > p2.second) return false;
    if (p1.first > p2.first)
        return true;
    else
        return false;
}
void extras()
{
    // Sorting
    sort(a, a + n);                 // for sorting any array
    sort(v.begin(), v.end());       // sorting vector
    sort(a, a + n, greater<int>()); // sorting in descending order
    // if array = {{1,2} , {2,1} , {4,1}}
    // and we need to store on basis of 2nd element
    // if 2nd element is same sort it on basis of first element but in descending
    sort(a, a + n, comp()); // function is made above
    //{{4,1} , {2,1}, {1,2 }}
    int num = 7;
    int ct = __builtin_popcount();
    long long num1 = 128736126387126387;
    int ct1 = __builtin_popcoutll();
    // TO get permutations of a number , number should be in sorted in ascending order
    //  to sort in ascending just use sort(num2.begin() , num2.end())
    string num2 = "123";
    do
    {
        cout << num2 << endl;
    } while (next_permutation(num2.begin(), num2.end()));
    // for maximum element of array
    int maxi = *max_element(a, a + n);
}

int main()
{
    // pairs();
    // vectorss();
    // explainstack();
    // explainqueue();
    // priority();
    // explainset();
    mapp();
    return 0;
}