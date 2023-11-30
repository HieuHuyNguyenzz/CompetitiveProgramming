# Chia căn
## Mở đầu
Chia căn là tập hợp một nhóm cách phương pháp / thuật toán với tư tưởng chia bài toán thành $\sqrt{n}$ phần. 
Nhóm các phương pháp này thường có độ phức tạp O($log{n}$), tức là tốt hơn so với O(n) và tệ hơn O(logn). Vì vậy trong phần lớn các
trường hợp các thuật toán chia căn thường đủ tốt để xử lý các vấn đề.

Một số các ưu điểm của chia căn:
- Có thể sử dụng ít bộ nhớ hơn so với các cấu trúc dữ liệu khác
- Dễ hiểu và dễ cài đặt

## Ví dụ minh họa
Để mô tả một ví dụ đơn giản về chia căn. Chúng ta sẽ lấy một ví dụ về bài toán trả lời truy vấn trên một mảng.

Cho một mảng A gôm N phần tử là các số nguyên không âm. Cần trả lời Q truy vấn có dạng (l,r,k) yêu cầu tìm đếm số phần tử của A trong
đoạn [l..r] có giá trị bằng k.

### Hướng tiếp cận 1
Hiển nhiên với mỗi truy vấn chúng ta chỉ cần duyệt từ l đến r để đếm số phẩn tử bằng k. Do đó chúng ta có độ phức tạp O(N.Q) ở hướng tiếp cận này

### Hướng tiếp cận 2
Chia mảng A thành $\sqrt{n}$ đoạn với $\sqrt{n}$ mảng. Mỗi mảng quản lý một đoạn $\sqrt{n}$ phần tử liên tiếp. Lấy ví dụ như sau:
![image](https://github.com/HieuHuyNguyenzz/CompetitiveProgramming/assets/135397654/51292447-0210-4992-affc-e98f07d9ae46)

Với một truy vấn bất kì, ví dụ như (1,11,0), Với những đoạn đầy đủ, ta cộng cnt[0]
 của chúng vào kết quả. Với những đoạn không đầy đủ, ta xét từng phần tử. Phần tử nào bằng 0, ta sẽ tăng biến đếm kết quả lên 1. Với truy vấn (1,11,0)
, ta có kết quả là 2+3+1+1=7
.
![image](https://github.com/HieuHuyNguyenzz/CompetitiveProgramming/assets/135397654/ff42cfb6-1f18-44fc-b62c-7b5515fd7933)

### Phân tích
Tại sao lại cần phải chia thành $\sqrt{n}$ phẩn?

Giả sử không tính đoạn cuối thì mảng được chia thành S đoạn. Vậy mỗi đoạn có độ dài N/S phần tử. Khi xét một truy vấn, chúng ta xét 2
phần là phần nằm hoàn toàn trong khoảng truy vấn và phần nẳm một phần trong truy vấn. Với phần nằm hoàn toàn trong truy vấn, chúng ta chỉ cần
lấy mảng cho phần tử đấy với độ phức tạp O(1). Với mảng chỉ nằm một phần chúng ta cần xét từng phần tử nằm trong khoảng truy vấn với
mỗi phần tử có độ phức tạp trong trường hợp tệ nhất là O(N/S).

Trường hợp tệ nhất là xét cả S đoạn nên độ phức tạp trong trường hợp tệ nhất là O(S+N/S) >= O($\sqrt{n}$). Vậy độ phức tạp cho b0ài toán là Q $\sqrt{n}$

## Một số các trường hợp sử dụng của chia căn
Một số các ứng dụng của chia căn có thể kể đến như sau:
- Trả lời các truy vấn trên một mảng tĩnh, sử dụng các phương pháp như thuật toán Mo hoặc tính toán trước các khối (block precomputation).

- Thực hiện các thay đổi "lười biếng" (lazy) bằng brute force, trong đó việc truy vấn toàn bộ một khối dễ dàng, nhưng việc truyền thẻ (tag pushing) không rõ ràng.

- Tách riêng các đối tượng dựa trên một ngưỡng, khi có cả một thuật toán O(x) và một thuật toán O(n/x) cho việc xử lý dữ liệu.
