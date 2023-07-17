# Chặt nhị phân (Binary Search)
Tìm kiếm nhị phân (hay còn gọi là chặt nhị phân) là một trong số các thuật toán cơ bản của khoa học máy tính, được sử dụng làm nền tảng của nhiều thuật toán khác. 

Bài toán: Cho một danh sách a[0..n] chứa các phần tử có cùng kiểu dữ liệu và một giá trị x có cùng kiểu dữ liệu với các phần tử trong a. Ta cần tìm một vị trí i trong a sao cho a[i] = x hoặc trả về -1 nếu không tìm được phần tử thỏa mãn.

## 1. Tìm kiếm tuyến tính (Linear Search hoặc Sequential Search)
Trước khi đi vào chi tiết thuật toán tìm kiếm nhị phân, hãy xét cách tìm kiếm thông thường đó là tìm kiếm tuyến tuyến tính:

Ý tưởng: Thuật toán hoạt động bằng cách duyệt từng phần tử từ trái sang phải, dần dần cho đến khi tìm được phần tử mong muốn. Nếu duyệt hết mảng mà không tìm được phần tử mong muốn thì trả về -1. 

Một số đặc điểm của thuật toán:
- Không đòi hỏi thứ tự xác định
- Độ phức tạp tổng quát của thuật toán là O(n), do chúng ta cần phải duyệt tuần tự mảng.
- Làm việc được với cấu trúc Linked List

Cài đặt: khá đơn giản, chỉ cần 1 vòng for:

```cpp
// giả sử a là mảng các số nguyên int
int LinearSearch(int x, int a[]){
    for(int i = 0; i < a.size(); i++){
        if(a[i] == x){
            return i;
        }
    }
    return -1;
}
```

## 2. Tìm kiếm nhị phân (Binary Search)
Từ ý tưởng của tìm kiếm tuần tự ở trên, dễ nhận thấy một vấn đề là với các bài toán với kích cỡ tìm kiếm lớn thì việc tìm kiếm với độ phức tạp O(n) là không tối ưu. Vậy nên thuật toán chặt nhị phân trở nên tối ưu hơn do nó chỉ có độ phức tạp $log{n}$

Ý tưởng: Dựa trên tư tưởng chia để trị, thuật toán tìm kiếm nhị phân sẽ giảm không gian tìm kiếm xuống một nửa sau mỗi vòng lặp mà không cần so sánh với một nửa không gian tìm kiếm như tìm kiếm tuần tự. Để làm được điều này, ở mỗi một lần lặp thuật toán sẽ so sánh giá trị x với một giá trị a[mid] ở giữa không gian tìm kiếm, nếu a[mid] < x thì loại bỏ nửa trước của không gian tìm kiếm, nếu không thì loại bỏ nửa sau của không gian tìm kiếm. Thực hiện việc chia đôi không gian tìm kiếm cho đến khi không gian tìm kiếm chỉ cồn 1 phần tử.

Chứng minh thuật toán: để có thể thực hiện việc loại bỏ một nửa không gian tìm kiếm thì trước khi chạy thuật toán mảng cần phải được sắp xếp theo thứ tự (mặc định là từ bé đến lớn), do khi so sánh với giá trị trung gian a[mid] nếu a[mid] < x thì tức là các phần tử ở dưới vị trí mid là a[0..mid-1] sẽ đều nhỏ hơn a[mid] (do mảng đã được sắp xếp) và do đó sẽ nhỏ hơn x, tương tự với khi a[mid] >= x. Do đó ở mỗi bước chúng ta sẽ loại bỏ được một nửa mảng mà không cần phải so sánh. Khi không gian chỉ còn 1 phần tử a[i] thì nếu a[i] = x thì đó chính là phần tử cần tìm còn nếu không thì mảng không có phân tử cần tìm kiếm. 

Độ phức tạp: O($log{n}$)

So sánh tìm kiếm nhị phân với tìm kiếm tuần tự, có thể thấy tìm kiếm nhị phân nhanh hẳn.
![Alt Text](https://blog.penjee.com/wp-content/uploads/2015/04/binary-and-linear-search-animations.gif)

Cài đặt:
```cpp
int binary_search(int A[], int target) {
    int lo = 1, hi = a.size();
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (A[mid] == target)
            return mid;       	
        else if (A[mid] < target)
            lo = mid+1;
        else
            hi = mid-1;
    }
    // không tìm thấy giá trị target trong mảng A
    return -1;
}    	
```

## 3. Upper_bound và Lower_bound
Có 2 hàm thường được sử dụng dựa trên tìm kiếm nhị phân đó là hàm Lower_bound và Upper_bound

<strong>Lower_bound</strong>: Là phần tử đầu tiên trong mảng đâu tiên trong mảng có giá trị không nhỏ hơn x.

Cài đặt:
```cpp
int lower_bound(int arr[], int N, int X)
{
    int mid;
    int low = 0;
    int high = N;

    while (low < high) {
        mid = low + (high - low) / 2;
        if (X <= arr[mid]) {
            high = mid;
        }

        else {
            low = mid + 1;
        }
    }
    if(low < N && arr[low] < X) {
       low++;
    }
    return low;
}
```
<strong>Upper_bound</strong>: Là phần tử đầu tiên trong mảng đâu tiên trong mảng có giá trị lớn hơn x.

Cài đặt:
```cpp
int upper_bound(int arr[], int N, int X)
{
    int mid;
    int low = 0;
    int high = N;

    while (low < high) {
        // Find the middle index
        mid = low + (high - low) / 2;

        if (X >= arr[mid]) {
            low = mid + 1;
        }

        else {
            high = mid;
        }
    }
    if(low < N && arr[low] <= X) {
       low++;
    }
    return low;
}
```
Có thể thấy rằng hai hàm trên tương đồng với tìm kiếm nhị phân, chỉ khác nhau ở đoạn cuối do mục đích của các hàm là khác nhau.

## 4.Tìm kiến nhị phân trong STL
Trong thư viện Algorithm của C++ có các hàm tìm kiếm nhị phân được cài sẵn, cũng như các hàm lower_bound, upper_bound,...

### std::binary_search
Trả về true nếu trong mảng a có phần tử x, false nếu không tìm thấy phần tử.

Cú pháp:
```cpp
binary_search(a.begin(), a.end(), x);
```
### std::lower_bound
Trả về con trỏ dến phần tử đầu tiên trong mảng có giá trị không nhỏ hơn x hoặc trả về a.end() nếu không có giá trị nào thỏa mãn.

Cú pháp:
```cpp
lower_bound(a.begin(), a.end(), x);
```
### std::upper_bound
Trả về con trỏ dến phần tử đầu tiên trong mảng có giá trị lớn hơn x hoặc trả về a.end() nếu không có giá trị nào thỏa mãn.

Cú pháp:
```cpp
upper_bound(a.begin(), a.end(), x);
```
### std::equal_range
Trả về một một khoảng [it1, it2] có giá trị bằng với x trong mảng. Nếu không tim được khoảng nào thỏa mãn, trả về khoảng có độ dài bằng không, với cả hai con trỏ đến giá trị gần nhất lớn hơn x, nếu có, hoặc trỏ đến a.end() nếu x so sánh lớn hơn tất cả các phần tử trong khoảng. Giá trị trả về có dạng pair<it1,it2>

Cú pháp:
```cpp
equal_range(a.begin(), a.end(), x);
```
## 5. Bổ sung
### Cách lấy vị trí trong mảng sau khi sử dụng các hàm Upper_bound, lower_bound
Vì các hàm trên sẽ trả về các con trỏ nên để lấy vị trí số nguyên trong mảng như sau:
```cpp
auto it = lower_bound(a.begin(), a.end(), x);
int idx = it - a.begin();
```

### Như ví dụ ở trên, thay vì khai báo con trỏ thì có thể sử dụng từ khóa auto
```cpp
auto it = lower_bound(a.begin(), a.end(), x);
//thay vì
vector<int>>::iterator it = lower_bound(a.begin(), a.end(), x);
```
Từ khóa auto được sử dụng để tự động suy luận kiểu dữ liệu của biến từ giá trị khởi tạo.

...
