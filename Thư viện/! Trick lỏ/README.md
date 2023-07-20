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

## 5....
