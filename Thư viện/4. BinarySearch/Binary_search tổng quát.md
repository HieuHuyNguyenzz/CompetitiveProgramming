# Binary Search tổng quát

# ...
Việc sử dụng tìm kiếm nhị phân trong những tác vụ tìm kiếm như tìm một số trong mảng chỉ là dạng đơn giản nhất của bài toán. Ở bài toán tổng quát của tìm kiếm nhị phân, các điều kiên của bài toán vẫn được giữ nguyên như sau:
- Không gian so sánh là một hàm đơn điệu (tức là chỉ tăng hoặc giảm)
- Ở mỗi bước, mục đích của bài toán là giảm một nửa không gian tìm kiếm
- khi không gian tìm kiếm của bài toán chỉ còn 1 - thì đây chính là kết quả của bài toán.

Có thể thấy ở trên rằng các điều kiện để sử dụng tìm kiếm nhị phân không có nhiều thay đổi, tuy nhiên ý đầu tiên: "Không gian so sánh là một hàm đơn điệu (tức là chỉ tăng hoặc giảm)" có tính tổng quát hơn so với phép so sánh hai số nguyên trong một mảng số. Để làm rõ ý này, ta có định lý sau:

Nguồn: https://vnoi.info/wiki/algo/basic/binary-search.md

**Định lý chính (Main Theorem)** cho biết rằng: một bài toán chỉ có thể áp dụng tìm kiếm nhị phân nếu và chỉ nếu hàm kiểm tra P của bài toán thỏa mãn:

$$∀x, y ∈ S, y > x ∧ P(x) = true ⇒ P(y) = true (*)$$

Lưu ý rằng tính chất trên của hàm kiểm tra P cũng tương đương với tính chất sau:

$$∀x, y ∈ S, y < x ∧ P(x) = false ⇒ P(y) = false$$

Trong đó P(x) là một hàm để tính toán hay kiểm tra một tính chất nào đó đại diện cho x. Định lý trên chỉ ra rằng tìm kiếm nhị phân chỉ hoạt động khi với một tập giá trị đã được sắp xếp S và một hàm P đại diện cho tính chất của mỗi
giá trị trong S thì với mọi y > x ∈ S thì P(y) luôn thỏa mãn khi P(x) thỏa mãn và ngược lại nếu P(y) không thỏa mãn một tính chất nào đó thì P(x) cũng sẽ không thỏa mãn nó.

Vậy tại sao điều kiện này lại quan trọng?

Với mục tiêu giảm một nửa không gian tìm kiếm, nếu tồn tại y > x mà P(y) không thỏa mãn một tính chất mà P(x) không thỏa mãn thì việc việc bỏ không gian chứa y có thể khiến bài toán bị mất một giá trị có thể là kết quả. Do đó 
đây là điều kiện cần của thuật toán

## Ví dụ:

Nguồn: https://cses.fi/problemset/task/1620

### Đề bài: 
Một xưởng có n máy có thể được sử dụng để làm sản phẩm. Mục tiêu của bạn là tạo ra tổng cộng t sản phẩm.

Đối với mỗi máy, bạn biết số giây cần thiết để tạo ra một sản phẩm duy nhất. Các máy có thể hoạt động đồng thời, và bạn có thể tự do quyết định lịch trình của chúng.

Thời gian cần thiết ngắn nhất để tạo ra t sản phẩm là bao nhiêu?

Input
- Dòng đầu vào đầu tiên có hai số nguyên n và m: số lượng máy và sản phẩm.

- Dòng tiếp theo có n số nguyên: k1, k2, ..., kn - thời gian cần thiết để tạo ra một sản phẩm bằng mỗi máy.

Output
- In một số nguyên: thời gian tối thiểu cần thiết để tạo ra t sản phẩm.

### Lời giải:

Bài này cần tìm giá trị x - thời gian tối thiểu để tạo ra t sản phẩm, do đó không gian tìm kiếm sẽ là thời gian. Với thời gian min ($t_{min}$) = 0 - tương đương 0 giây và thời gian max ($t_{max}$) = $k_{max}$ * t - giả định trường hợp là chỉ có 1 máy và thời gian 
sản suất của máy này tương đương với thời gian sản xuất của máy chậm nhất trong n máy nhân với t sản phẩm là thời gian để 1 máy này sản xuất t sản phẩm. Có thể thấy rằng $t_{max}$ chính là trường hợp tệ nhất có thể xảy ra cho bài toán
và thời gian cần tìm kiếm không thể vượt quá giá trị này.

Với mỗi một mốc thời gian x, có thể dễ dàng tính toán được số sản phẩm mà các máy này có thể sản xuất được trong thời gian này bằng cách lấy tổng số san phẩm có thể sản xuất bởi từng máy. Số sản phẩm có thể được sản xuất bời mỗi
máy có thể tính bằng cách chia x cho k[i].

Hiện nhiên rằng chúng ta sẽ không so sánh các giây trong không gian tìm kiếm (vô nghĩa vcl). Thay vào đó mỗi một giá trị thời gian trong không gian tìm kiếm ($t_{min}$ đến $t_{max}$) sẽ được biểu diễn bằng số sản phẩm tạo ra được trong thời gian đó.
Chúng ta có thể dễ dàng chứng minh được (hoặc không nhma nó khá hiển nhiên) rằng càng có nhiều thời gian thì càng sẩn xuất được nhiều sản phẩm. Do đó chúng ta có điều kiên đầu tiên và cần thiết để sử dụng tìm kiếm nhị phân, với
P(x) tương ứng với số sản phẩm sản xuất được trong số giây.

Ta có mã giả như sau:
```
while (lo <= hi) {
    ll mid = (lo + hi) / 2;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (mid / k[i]);
        if (sum >= t) { // Xử lý trường hợp tràn số
            break;
        }
    }
    if (sum >= t) {
        ans = mid;
        hi = mid - 1;
    } else {
        lo = mid + 1;
    }
}
```
Trong đó đoạn:
```
for (int i = 0; i < n; i++) {
        sum += (mid / k[i]);
        if (sum >= t) { // Xử lý trường hợp tràn số
            break;
        }
    }
```
chính là hàm P ở trên và ```sum``` chính là số sản phẩm có thể được tạo ra trong ```mid``` giây. Lưu ý rằng để tránh xảy ra tràn số thì khi sum $\geq$ t thì lập tức dừng hàm P vì việc tính toán thêm là không cần thiết. Cân lưu 
ý là do chỉ cần tìm thời gian tối thiểu cần thiết để tạo ra t sản phẩm nên chỉ cần sum $\geq$ t là đủ.
