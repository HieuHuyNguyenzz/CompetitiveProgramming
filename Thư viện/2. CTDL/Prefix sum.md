# Mảng cộng dồn (prefix sum)
## Trích từ VNOI
Cho một mảng $A$ có $n$ phần tử được đánh số từ $0$ đến $n - 1$, ta dựng mảng $S(A)$ theo quy tắc sau:

- $S_0 = c$, với $c$ là một hằng số thực
- $S_i = S_{i - 1} + A_{i -1} = \displaystyle c +\sum_{j = 0}^{i - 1} A_j$, với $1 \le i < n$

Mảng $S(A)$ được gọi là **mảng cộng dồn (tiền tố)** theo $c$ của $A$, gọi cách khác là prefix sum của $A$. Từ một mảng $A$, ta có thể sinh ra vô hạn mảng $S(A)$ bằng cách chọn một số thực $c$ tùy ý; trên thực tế, ta thường chọn $c = 0$ để thuận tiện hơn khi tính toán.

![](https://i.imgur.com/lzBYJ89.gif)

## Mảng cộng dồn được dùng khi nào và dùng để làm gì?
Mảng cộng dồn thường được dùng trong các bài toán về query liên quan đến:
- Tính tổng trên một đoạn.
- Đếm tần xuất

Ngoài ra tư tưởng của mảng cộng dần cũng được áp dụng trong các biến thể như mảng hiệu, xor, tích, ...

## Nhược điểm của mảng cộng dồn
- Không áp dụng được với các bài toán liên quan đến min-max
- Không hiệu quả với các bài toán có các truy vấn cập nhật mảng.

## Cài đặt
```cpp
int n;  // Số phần tử của mảng
long long sum[n+1];  // Mảng cộng dồn
long long a[n]; // Mảng a
sum[0]=0;
for(int i=1;i<=n;i++){
  sum[i]=sum[i-1]+a[i-1];
}
```
trong C++ cũng cung cấp hàm ```partial_sum``` để xây dựng mảng cộng dồn:
```cpp
partial_sum(first, last, result, binary_op)
```
Trong đo tham số binary_op tương ứng với toán tử được sử dụng và có thể được để trống. Khi này, toán tử mặc định là phép cộng (+).

Độ phức tạp trong quá trình xây dựng mảng cộng dồn là O(n)

## Mảng cộng dồn hai chiều
