# Vector
Trong C++, vector là một cấu trúc dữ liệu mảng động, tức là kích cỡ của nó có thể được thay đổi một cách linh động khi cần thiết.

## Vector với array
Khác với mảng thường là mảng tĩnh, kích cỡ của mảng thường chỉ có thể khai báo một lần lúc khởi tạo, vector có thể thay đổi kích cỡ khi cần thêm phần tử mới vào.

## Khởi tạo một vector
### Cách 1: Cơ bản
```cpp
vector<object_type> a;
a.push_back(1);
a.push_back(2);
...
```

### Cách 2:
```cpp
vector<object_type> a{1,2,3,...};
```

### Cách 3: Sử dụng constructor 
```cpp
vector<int>a(10,0); // Khởi tạo vector a với 10 phần tử giá trị 0
```

## Các hàm và phương thức trong vector
| Hàm | Giải thích |
|-----|------------|
|```at( k )```|Cho phép truy cập vào phần tử thứ k của vector|
|```back()```|Truy cập đến phần tử cuối cùng của vector|
|```front()```|Truy cập đến phần tử đầu tiên của vector|
|```swap( a, b )```|Trao đổi phần tử giữa hai vector|
|```push_back()```|Thêm phần tử mới vào vector|
|```pop_back()```|Xóa phần tử cuối cùng trong vector|
|```empty()```|Kiểm tra xem vector có rỗng hay không|
|```insert()```|Thêm phần tử mới vào vị trí xác định trong vector|
|```erase()```|Xóa phần tử ở vị trí xác định trong vector|
|```resize()```|Thay đổi kích cỡ của vector|
|```clear()```|Xóa toàn bộ phần tử trong vector|
|```size()```|Trả về kích cỡ vector|
|```capacity()```|Trả về số phần tử tối đa có thể chứa trước khi tăng kích cỡ|
|```assign()```|Gán giá trị mới cho một khoảng của vector|
|```end()```|Trả về con trỏ chỉ về sau vị trí cuối của vector|
|```emplace()```||
|```emplace_back()```|Thêm phần tử mới vào cuối vector|
|```rend()```||
|```rbegin()```||
|```begin()```||
|```max_size()```||
|```cend()```||
|```cbegin()```||
|```crbegin()```||
|```crend()```||
|```data()```||
|```shrink_to_fit()```||
