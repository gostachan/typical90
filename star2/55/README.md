# POINT
下のコードだとlong long 型を超えてしまうので下のコードで記述する

if (a[i] % p * a[j] % p * a[k] % p * a[l] % p * a[m] % p == q) ++count;
if (a[i] * a[j] * a[k] * a[l] * a[m] % p == q) ++count;
