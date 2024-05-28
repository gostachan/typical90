# 二つの解法の違い
### ans1.cpp
unordered_mapを利用している  
時間計算量 O(N)  
### ans2.cpp
setを利用している  
時間計算量 O(N log N)  
set.find() -> O(log N)  
