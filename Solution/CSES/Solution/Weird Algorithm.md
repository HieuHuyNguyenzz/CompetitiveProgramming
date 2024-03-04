# Weird Algorithm

# Đề bài:

Xét thuật toán sau nhận đầu vào là một số nguyên dương *n*. Nếu *n* chẵn, thuật toán sẽ chia nó cho hai, và nếu *n* lẻ, thuật toán nhân ba nó lên rồi cộng thêm một đơn vị. Thuật toán trên lặp lại điều này cho tới khi *n* bằng 11. Ví dụ, dãy số thực hiện với *n*=3 là:

$$
3→10→5→16→8→4→2→13→10→5→16→8→4→2→1
$$

Việc của bạn là hãy mô phỏng lại cách hoạt động của thuật toán với một giá trị *n* cho trước.

### Input

- Một dòng duy nhất chứa số *n*.

### Output

- In ra một dòng lần lượt chứa từng giá trị của *n* trong khi chạy thuật toán.

### Constraints

- $1≤n≤10^6$

### Example

**Sample input**

`3`

**Sample output**

`3 10 5 16 8 4 2 1`

# Solution

- Đánh giá: 0*
- Dạng bài: bảo gì làm đấy
- Chỉ cần chạy code đúng theo yêu cầu đề bài, biến đổi cho đến khi n = 1.
- Lưu ý duy nhất là khai báo biến. Do n≤ $10^6$ nên trong trường hợp tệ nhất n có thể lên đến **long long** do đó nếu khai báo **int** sẽ không qua hết test