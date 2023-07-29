# Các thuật toán sắp xếp

Sắp xếp là một thuật toán quan trọng nhất trong không chỉ lặp trình thi đấu mà còn trong ngành khoa học máy tính nói riêng. Đây là một trong những thuật toán đã được nghiên cứu từ rất lâu. 

Bài toán sắp xếp dạng tổng quát nhất là sắp xếp (Sorting) một tập các dữ liệu theo một thứ tự tăng dần (hoặc giảm dần) dựa vào một điều kiện cụ thể.
## 1. Sắp xếp nổi bọt (Bubble Sort)
![Alt Text](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif?20131109191607)

Đây là thuật toán cơ bản nhất cho việc sắp xếp.

Ý tưởng: 
- Xét lần lượt các cặp 2 phần tử liên tiếp. Nếu phần tử đứng sau nhỏ hơn phần tử đứng trước, ta đổi chỗ 2 phần tử. Nói cách khác, phần tử nhỏ nhất sẽ nổi lên trên.
- Lặp lại đến khi không còn 2 phần tử nào thỏa mãn. Có thể chứng minh được số lần lặp không quá N−1, do một phần tử chỉ có thể nổi lên trên không quá N−1 lần.

Độ phức tạp: O($n^2$)

Cài đặt: [BubbleSort.cpp](src/BubbleSort.cpp)


## 2. Sắp xếp chèn (Insertion Sort)
![Alt Text](https://upload.wikimedia.org/wikipedia/commons/9/9c/Insertion-sort-example.gif)

Ý tưởng:
- Ý tưởng chính của thuật toán là ta sẽ sắp xếp lần lượt từng đoạn gồm 1 phần tử đầu tiên, 2 phần tử đầu tiên, …, N phần tử.
- Giả sử ta đã sắp xếp xong i phần tử của mảng. Để sắp xếp i+1 phần tử đầu tiên, ta tìm vị trí phù hợp của phần tử thứ i+1 và "chèn" nó vào đó.

Độ phức tạp: O($n^2$)

Cài đặt: [InsertionSort.cpp](src/InsertionSort.cpp)

## 3. Sắp xếp chọn (Selection Sort)
![Alt Text](https://thumbs.gfycat.com/SnappyMasculineAmericancicada-size_restricted.gif)

Ý tưởng: thực hiện n bước tương ứng:
- Bước 1 tìm phần tử nhỏ nhất của dãy và đưa lên đầu dãy
- Bước 2 tìm phần tử nhỏ thứ 2 của dãy và đưa lên vị trí thứ 2
- Bước i tìm phần tử nhỏ thứ i của dãy và đưa lên vị trí thứ n, cho đến khi được dãy gồm n phần tử từ nhỏ đến lớn.

Độ phức tạp: O($n^2$)

Cài đặt: [SelectionSort.cpp](src/SelectionSort.cpp)

## 4. Sắp xếp trộn (Merge Sort)
![Alt Text](https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif?20151222172210)

Ý tưởng:
Sắp xếp trộn hoạt động kiểu đệ quy:

Đầu tiên chia dữ liệu thành 2 phần, và sắp xếp từng phần. 

Sau đó gộp 2 phần lại với nhau. Để gộp 2 phần, ta làm như sau:
- Tạo một dãy A mới để chứa các phần tử đã sắp xếp.
- So sánh 2 phần tử đầu tiên của 2 phần. Phần tử nhỏ hơn ta cho vào A và xóa khỏi phần tương ứng.
- Tiếp tục như vậy đến khi ta cho hết các phần tử vào dãy A.

Độ phức tạp O($nlogn$)

Cài đặt: [MergeSort.cpp](src/MergeSort.cpp)

## 5. Sắp xếp vun đống (Heap Sort)
![Alt Text](https://upload.wikimedia.org/wikipedia/commons/4/4d/Heapsort-example.gif?20110419031008)

Ý tưởng:

Ta lưu mảng vào CTDL Heap.

Ở mỗi bước, ta lấy ra phần tử nhỏ nhất trong heap, cho vào mảng đã sắp xếp.

Độ phức tạp O($nlogn$)

Cài đặt: [HeapSort.cpp](src/HeapSort.cpp)

## 6. Sắp xếp nhanh (Quick Sort)
![Alt Text](https://upload.wikimedia.org/wikipedia/commons/9/9c/Quicksort-example.gif)

Ý tưởng:
Bước 1:Chia dãy thành 2 phần, một phần "lớn" và một phần "nhỏ".
- Chọn một khóa pivot ngẫu nhiên
- Những phần tử lớn hơn pivot chia vào phần lớn
- Những phần tử nhỏ hơn hoặc bằng pivot chia vào phần nhỏ.

Bước 2: Gọi đệ quy để sắp xếp 2 phần.

Độ phức tạp O($nlogn$), xáu nhất là O($n^2$) nhưng trường hợp này như không thể xảy ra.

Cài đặt: [QuickSort.cpp](src/QuickSort.cpp)

## 7. Một só thuật toán sắp xếp khác
Ngoài các thuật toán kể trên, còn rất nhiều thuật toán sắp xếp khác:
- Sắp xếp cơ số (Radix Sort): O(N) -> O(N∗log(max(ai)))
- Sắp xếp đếm (Counting Sort): O(N) -> rất lớn
- Sắp xếp phân cụm (Bucket Sort): O(N) -> O($N^2$)

Ngoài ra còn nhiều thuật toán  khác chưa được đề cập đến.

## 8. Hàm sort trong STL
Tất cả các thuật toán sắp xếp được đề cập ở trên đều có những nhược điểm riêng:
- Thuật toán Bubble Sort, Insertion Sort, Selection Sort đều có độ phức phức tạp rất lớn O($N^2$)
- Thuật toán Merge Sort cần dùng nhiều bộ nhớ trong quá trình sắp xếp
- Các thuật toán Quick Sort và Heap Sort có độ phức tạp không ổn định
- Các thuật toán được đề cập trong phần 7 đều là các thuật toán chỉ hoạt động tốt trong một số trường hợp đặc biệt và cực kì không ổn định.

Trong C++ cung cấp hàm ```sort()``` trong thư viện Algorithm với độ phức tạp ổn định hơn so với các thuật toán kia và nhanh hơn. Hàm ```sort()``` được viết kết hợp giữa 3 thuật toán sắp xếp là  Quicksort, Heapsort và Insertion Sort còn được gọi là 
Intro Sort. 

Cú pháp:
```cpp
Sort(a.begin(), a.end());
```
### Cách viết hàm sắp xếp custom:
Hàm ```sort()``` mặc định sẽ sắp xếp các phần tử từ bé đến lớn với mảng số và theo thứ tư từ điên đối với mảng xâu. TUy nhiên nếu muốn thay đổi cách sắp xếp theo một quy luật khác
hoặc sắp xếp với cấu trúc dữ liệu sử dụng struct. Ta cần phải viết hàm so sánh như sau:
```cpp
bool cmp(object A, objeect B){
    //Viết điều kiện để so sánh
    return A.x<B.x;
}
```
và sắp xếp như sau:
```cpp
sort(a.begin(), a.end(), cmp);
```
Đối với một sô điều kiện đơn giản hơn như sắp xếp từ nhỏ đến lớn có thể dùng greater<int> có sẵn thay vì viết cmp
