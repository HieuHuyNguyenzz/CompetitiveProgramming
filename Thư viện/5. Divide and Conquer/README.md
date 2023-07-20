# Chia để trị (Divide and Conquer)

_Khái niệm_:Giống Tham lam, Chia để trị không chỉ là một thuật toán mà là một chuỗi các thuật toán có cùng tư tưởng với nhau. Chia để trị dựa trên việc chia nhỏ vấn đề (Divide) thành các vấn đề con tương tự với nó và thực hiện giải quyết các bài toán con (Conquer) để sử dụng kết quả các bài toán con giải bài toán lớn hơn. Lặp lại việc chia này cho đến khi không thể chia được nữa.

Các bài toán sử dụng tư tưởng chia để trị có độ phức tạp tính bằng hàm log, thường là log{n} và tệ nhất là O(n), do đó nó sẽ nhanh hơn so với các giải thuật tuyến tính O(n) và chậm hơn các giải thuật tức thời O(1).

Một số ví dụ về giải thuật sử dụng chia để trị: QuickSort, MergeSort, BinarySearch...

Do tính chất chia nhỏ của mình, các giải thuật chia để trị thường sử dụng để quy trong quá trình cài đặt, ta có mã giả của một giải thuật DvC như sau:
```cpp
DvC(a, i, j)
{
    if(small(a, i, j))
      return(Solution(a, i, j))
    else 
      mid = divide(a, i, j)               // f1(n)
      b = DAC(a, i, mid)                 // T(n/2)
      c = DAC(a, mid+1, j)            // T(n/2)
      d = combine(b, c)                 // f2(n)
   return(d)
}
```
Trong đó b,c sẽ là các bài toán con, được giải bằng hàm divine , thuật toán sẽ gọi đến một hàm combine để kết hợp b, c thành kết quả bài toán lớn và trả về d.
Tất nhiên giống như các vấn đề đệ quy khác, việc chia để trị cũng chỉ chia đến một trường hợp nào đấy, còn được goi là trường hợp base của bài toán.

