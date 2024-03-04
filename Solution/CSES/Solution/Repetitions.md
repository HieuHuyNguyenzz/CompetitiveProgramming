# Repetitions

# Đề bài

Bạn có một dãy ADN: một xâu kí tự chỉ gồm các chữ cái `A`, `T`, `G`, `C`. Hãy tìm đoạn ADN con dài nhất chỉ gồm các kí tự giống nhau.

### Input

- Một dòng duy nhất chứa xâu *s*.

### Output

- In ra độ dài của đoạn ADN con dài nhất tìm được.

## Constraints

- $1≤n≤10^6$

## Example

**Sample input**

`ATTCGGGA`

**Sample output**

`3`

# Solution

- Đánh giá: 0*
- Dạng bài: đếm cơ bản
- Chỉ cần duyệt qua xâu và sử dụng biến đếm, nếu chữ cái ở vị trí i giống vị trí i-1 thì tăng biến đếm lên 1, nếu không thì đặt lại biến đếm bằng 1. Thực hiện cập nhật độ dài lớn nhất ở tất cả các bước.