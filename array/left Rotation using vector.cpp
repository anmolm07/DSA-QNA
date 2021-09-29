vector<int> rotateLeft(int d, vector<int> arr) {
    int n =arr.size();
    std::rotate(arr.begin(),arr.begin()+d,arr.end());
    return arr;
    

}
