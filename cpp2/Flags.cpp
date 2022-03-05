vector<int> peak;
int answer = 0;

void binarySearch(int s, int e){
    if(s>e) return;
    int mid = (s+e)/2;
    int flag = 1;
    int temp = 0;
    for(int i=1; i<peak.size(); i++){
        if(peak[i]-peak[i-1]+temp>=mid){
            flag++;
            temp = 0;
        }else{
            temp += peak[i]-peak[i-1];
        }
    }
    if(flag>=mid){
       answer = mid;
       binarySearch(mid+1, e);
    }else{
        binarySearch(s, mid-1);
    }
    
}

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    for(int i=1; i<A.size()-1; i++){
        if(A[i-1]<A[i] && A[i]>A[i+1])  peak.push_back(i);
    }
    int start = 0;
    int end = peak.size();
    binarySearch(start, end);
    return answer;
}