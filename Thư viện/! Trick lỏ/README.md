# Một số trick xàm khi làm CP:
## 1. Chọn ngôn ngữ sử dụng để làm bài
Hơn 90% người dùng tham gia lập trình thi đấu sẽ dùng C++, do đây có thể coi là ngôn ngữ nhanh nhất xét về tốc độ thực thi. Các ngôn ngữ khác thường sẽ chậm hơn, java là 1.5 lần so với C++ và Python là ~3 lần so với C++.
Ngoài ra việc chọn phiên bản C++ nào cũng rất quan trọng. C++ 11 thì thường sẽ bị nhiều hạn chế, C++ 14 và C++ 17 sẽ có đầy đủ nhất các chức năng mà C++ cung cấp (Ví dụ như C++ 11 được dùng  ```for(int i:a)```)

## 2. Sử dụng thư viện
```cpp
#inlcude<bits/stdc++.h>
```
Thư viện này có thể thay thế tất cả các thư viện STL khác, đỡ tốn thời gian~

## 3. Xuống dòng
Dùng
```cpp
cout<<"\n";
```
Thay vì
```cpp
cout<<endl;
```

## 4. Nên sử dụng array nếu có thể
Thay vì dùng vector thì nên sử dụng mảng thường để tránh tốn bộ nhớ

## 5 Tăng tốc độ nhập xuất
Trong C++, sử dụng nhập xuất ```cin / cout``` có tốc độ không nhanh so với sử dụng nhập xuất trong C.
Sử dụng hai dòng lệnh sau sẽ giúp tăng tốc độ nhập xuất
```cpp
ios_base::sync_with_stdio(false);
cin.tie(NULL);
```
```ios_base::sync_with_stdio(false)``` đặt trạng thái đồng bộ hóa của các luồng nhập/xuất chuẩn trong C++ thành không đồng bộ với các hoạt động nhập/xuất C của C. Điều này có thể cải thiện hiệu suất của các hoạt động nhập/xuất trong C++. ```cin.tie(NULL)``` hủy liên kết giữa cin và cout. Điều này có nghĩa là sau khi bạn nhập từ cin, nó sẽ không tự động xóa bộ đệm đầu ra của cout, điều này có thể giúp cải thiện hiệu suất.

## 6. Sử dụng typecasting
Ví dụ như sau:
```cpp
#define sz(x) (int)x.size()
```
Việc sử dụng các typecasting này giúp việc code trở nên thuẩn tiện hơn hmmm.

## 7. Làm quen với việc sử dụng các toán tử bit
Các toán tử bit thường chạy nhanh hơn so với sử dụng các hàm bình thường. Ví dụ khi cần chia một số cho 2 hoặc nhân với 2, việc sử dụng toán tử ```<<``` hay ```>>``` sẽ nhanh hơn so với ```x*=2``` hay ```x/=2```.
Ta có:
- Toán tử ```&```: sử dụng để kiểm tra dư khi chia cho 2.

## 8. Sử dụng range based thay cho vòng lặp thông thường
Ví du:
```cpp
for(int i:a)
  // bla bla
```
thay vì
```cpp
for(int i=0;i<a.size();i++)
  // bla bla
```
