# Bài 1: Chuỗi hạt

## Đề bài
Ngân có một chuỗi hạt được biểu diễn bằng một xâu 𝑆 có độ dài không quá 10000 kí tự, các
kí tự đều là chữ cái la tinh thường. Ngân muốn cắt chuỗi hạt để nhận được 𝑘 chuỗi con, trong
đó mỗi chuỗi con có độ dài định trước và là chuỗi đối xứng.
Yêu cầu: Hãy giúp Ngân xác định xem có tồn tại cách cắt 𝑆 để nhận được 𝑘 xâu đối xứng có
độ dài 𝑙1, 𝑙2, . . , 𝑙𝑘.
Ví dụ, có thể cắt xâu ‘asaaabbrcaacw’ để nhận được ba xâu đối xứng có độ dài 2, 3 và 4 là
‘bb’, ‘aaa’, ‘caac’.
Dữ liệu: Vào từ thiết bị vào chuẩn có khuôn dạng:
- Dòng đầu chứa xâu 𝑆;
- Dòng thứ hai chứa số nguyên 𝑇 là số trường hợp thử;
- 𝑇 dòng sau, mỗi dòng có dạng: số đầu tiên là số 𝑘, tiếp theo là 𝑘 số nguyên dương
𝑙1
, 𝑙2
, . . , 𝑙𝑘.
Kết quả: Ghi ra thiết bị ra chuẩn 𝑇 dòng, mỗi dòng tương ứng với một trường hợp thử
nghiệm, ghi “YES” nếu tồn tại cách cắt thỏa mãn hoặc “NO” trong trường hợp ngược lại.

Giới hạn:

- Subtask 1 (30% số điểm): 𝑛 ≤ 20; 𝑞 ≤ 200;
- Subtask 2 (40% số điểm): 𝑛 ≤ 200; 𝑞 ≤ 2000;
- Subtask 3 (30% số điểm): 𝑛 ≤ 2000; 𝑞 ≤ 2 × $10^6$

## Ý tưởng
### 1. Ngây thơ

### 2. Giải thuật đúng
Có thể thấy đây là một bài truy vẫn trên xâu, do đó để trả lời các truy vấn + xâu đối xứng thì có thể áp dụng string hashing để tìm tất cả các xâu con đối xứng thuộc xâu lớn.

Sau đó do mỗi truy vấn yêu trả lời xem xâu gốc có thể chia thành một tập các xâu đối xứng với độ dài cho trước hay không vậy từ các xâu đối xứng tìm được trước đó cần tìm kiếm một tổ hợp các xâu này thỏa mãn đề bài và vị trí các xâu con đối xứng không được đè lên nhau. Công việc này có thể được giải quyết sử dụng kỹ thuật dp bitmask

Độ phức tạp: O()

## Cài đặt
[Chuỗi số](chuyentin1.cpp)

1. Khởi tạo các biến
``` cpp
string pattern,rev_pattern;      // xâu s và xâu đảo ngược của nó
vector <int> dp;                 // vector dùng cho quá trình quy hoạch động sau này
vector <long long> hash, rev_hash, power27; // Các vector dùng cho quá trình hash xâu 
int n, numQuery;         // n là độ dài xâu s và numQuery là số truy vấn
struct element {        // cấu trúc đại diện cho
	int numSegments; 
	vector <int> listSegments; 
};
vector <element> listElement; 
set <int> listLength;
vector <int> listPosition[10005];  
```
2. Gán giá trị cho các biến và thực hiện hash xâu
```cpp
void init() {
	hash.resize(n + 2, 0LL);
	rev_hash.resize(n + 2, 0LL);
	power27.resize(n + 2, 0LL);
	power27[0] = 1LL; 
	for (int i = 1; i <= n; i++) {
    	power27[i] = power27[i - 1] * 27LL; 
    	hash[i] = hash[i - 1] * 27LL + (pattern[i - 1] - 'a' + 1); 
    	rev_hash[i] = rev_hash[i - 1] * 27LL + (rev_pattern[i - 1] - 'a' + 1); 
  	}
}
```
3. Khởi tạo các hàm

Hàm lấy giá trị hash của một đoạn
```cpp
long long getHash(int l, int r, const std::vector <long long> &hash) {
	int len = r - l + 1;
	long long ret = hash[r];
	ret -= (hash[l - 1] * power27[len]);
	return ret;  
}
```
Hàm kiểm tra đối xứng
```cpp
bool checkPalindrome(int l, int r) {
	long long currentHash = getHash(l, r, hash); 
	long long reverseHash = getHash(n - r + 1, n - l + 1, rev_hash); 
	return (currentHash == reverseHash); 
}
```
