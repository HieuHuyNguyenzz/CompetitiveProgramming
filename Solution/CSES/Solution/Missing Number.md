# Missing Number

# Đề bài:

Bạn nhận được tất cả các số từ 1 đến *n* trừ một số. Nhiệm vụ của bạn là tìm số bị thiếu đó.

### Input

- Dòng đầu tiên chứa một số nguyên *n*.
- Dòng thứ hai chứa *n*−1 số. Các số khác nhau đôi một và mỗi số có giá trị từ 1 đến *n*.

### Output

- In ra số còn thiếu.

### Constraints

- $2≤n≤2⋅10^5$

### Example

**Sample input**

`5
 2 3 1 5`

**Sample output**

`4`

# Solution

- Đánh giá: 0.5*
- Dạng bài: toán học
- Nếu ngồi đếm thuần xem thiếu số nào thì chắc chắn sẽ bị TLE
- Cần nhớ công thức toán cơ bản sau:

$$
1+2+…+n = (n+1) \times \frac{n}{2}
$$

Hay dạng tổng quát như sau:

![image](https://github.com/HieuHuyNguyenzz/CompetitiveProgramming/assets/135397654/dc6065cf-4e2e-4c24-a6b7-8c769138f6ba)


- Khi đó chúng ta chỉ cần tính tổng từ 1 đến n và trừ đi các số nhận được sẽ được số bị thiếu
